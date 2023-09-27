************************************************
* LINX
*************************************************
*
* [ Código fonte ]
* LINXMenuUtility.PRG
*
* [ Descrição ]
* Definição da estrutura do banco de dados
*
* [ Autor ]
* Aurino Coimbra	
*
*
* 26-Setembro-2023 [ Aurino Coimbra ]
* Criação do código
*
***************************************************************
DEFINE CLASS oMenu AS Custom

	FUNCTION AddItem( pName, pDescription, pFormName, pImageFile )
		cIndex = ALLTRIM(STR(THIS.ControlCount))
		
		THIS.AddObject( "oItem" + cIndex, "oMenuItem" )
		
		oItem = EVALUATE( "THIS.oItem" + cIndex)

		oItem.LabelText   = pName
		oItem.Description = pDescription
		oItem.ImageFile   = pImageFile
		oitem.FormName    = pFormName
		
		RETURN oItem
	ENDFUNC
	
ENDDEFINE

DEFINE CLASS oMenuItem As Custom 

	Description = ""
	ImageFile   = ""
	LabelText   = ""
	FormName    = ""
	
	PROCEDURE INIT
	ENDPROC
ENDDEFINE

DEFINE CLASS oScreenEvents as Session 
  
  PROCEDURE Activate
    *oApp.oToolBar.RefreshToolBar()
    *oApp.oToolBar.Width = _screen.Width 
  ENDPROC
  
  PROCEDURE OnMenuItemClick
  	LPARAMETERS pFormName
  	oApp.DoForm(pFormName.FormName)
  	*MESSAGEBOX(pFormName.FormName)
  ENDFUNC
  
  PROCEDURE MouseDown
    LPARAMETERS nButton, nShift, nXCoord, nYCoord
    IF nButton == 2 THEN
    ENDIF 
  ENDPROC
  
  PROCEDURE KeyPress
    LPARAMETERS nKeyCode, nShiftAltCtrl
    DO CASE
      CASE nKeyCode == -1 
      CASE nKeyCode == 27
        =OnShutDown()
      OTHERWISE  
    ENDCASE
  ENDPROC  
  
  PROCEDURE Resize

    IF TYPE( "oMenu" ) == "O" THEN
		nLeft = (_SCREEN.Width - (oMenu.ControlCount * ( 128 + 5))) / 2 
		FOR EACH oItem IN oMenu.Controls
			mnuItem = EVALUATE("_SCREEN." + oItem.Name)
			mnuItem.Top = _screen.Height / 2
			mnuItem.Left = nLeft
			*mnuItem.Refresh()
			*mnuItem.Visible = .T.
			nLeft = nLeft + 128 + 5
		ENDFOR
    ENDIF
  ENDPROC
  
ENDDEFINE

