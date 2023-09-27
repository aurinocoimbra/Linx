*************************************************
* LINX
*************************************************
*
* [ Código fonte ]
* LNXCONST.H
*
* [ Descrição ]
* Definição da constantes para todos módulos do sistema
*
* [ Autor ]
* Aurino Coimbra	
*
*
* 26-Setembro-2023 [ Aurino Coimbra ]
* Criação do código
*

**
** Configuração para tipo de banco de dados que o sistema pode acessar
**
#DEFINE DB_SQL_SERVER		1
#DEFINE DB_MYSQL			2
#DEFINE DB_ORACLE			3
#DEFINE DB_POSTGRESQL		4
#DEFINE DB_FIREBIRD			5
#DEFINE DB_DB2				6

**
** Configuração para coluna em tabelas do sistema
**
#DEFINE DB_FIELD			0	&& Especifica se a coluna é chave primária
#DEFINE DB_PRIMARY_KEY		2	&& Especifica se a coluna é chave primária
#DEFINE DB_AUTO_NUMERIC		4	&& Especifica se a coluna tem auto-numeração 

**
** Geral
**
#DEFINE CRLF				CHR(13) + CHR(10)

**
** Banco de dados
**
#DEFINE ODBC_ADD_DSN        1 && Adiciona uma nova DSN de usuário
#DEFINE ODBC_CONFIG_DSN     2 && Configura/Modifica DSN de usuário
#DEFINE ODBC_REMOVE_DSN     3 && Remove DSN de usuário

#DEFINE ODBC_ADD_SYS_DSN    4 && Adiciona uma nova DSN de sistema
#DEFINE ODBC_CONFIG_SYS_DSN 5 && Configura uma nova DSN de sistema
#DEFINE ODBC_REMOVE_SYS_DSN 6 && Remove uma DSN de sistema

#DEFINE DB_PROMPTNEVER      3

#DEFINE MYODBC_NO_COL_WIDTH_OPTIMIZE  1
#DEFINE MYODBC_RETURN_MATCHING_ROWS   2
#DEFINE MYODBC_TRACE                  4
#DEFINE MYODBC_ALLOW_BIG              8
#DEFINE MYODBC_NO_PROMPT             16
#DEFINE MYODBC_ODBC_10               32
#DEFINE MYODBC_IGNORE_HASH           64
#DEFINE MYODBC_MANAGER_CURSOR       128
#DEFINE MYODBC_NO_SETLOCALE         256
#DEFINE MYODBC_PAD_CHAR             512
#DEFINE MYODBC_SQL_DESCRIBE_TABLE  1024
#DEFINE MYODBC_COMPRESSED          2048
#DEFINE MYODBC_IGNORE_SPACE        4096
#DEFINE MYODBC_NAMED_PIPES         8196
#DEFINE MYODBC_BIGINT_TO_INT      16384
#DEFINE MYODBC_NO_CATALOG         32768
#DEFINE MYODBC_READ_OPTIONS       65536
#DEFINE MYODBC_SAFETY            131072
#DEFINE MYODBC_NO_TRANS          262144
