/*
 * toc_parse_prefix.h
 *
 * Copyright (C) 2004 Svend Sorensen
 * For license terms, see the file COPYING in this distribution.
 */

/* Remap normal yacc names so we can have multiple parsers
 * see http://www.gnu.org/software/automake/manual/html_node/Yacc-and-Lex.html
 */

#define yymaxdepth	toc_yymaxdepth
#define yyparse		toc_yyparse
#define yylex		toc_yylex
#define yyerror		toc_yyerror
#define yylval		toc_yylval
#define yychar		toc_ychar
#define yydebug		toc_yydebug
#define yypact		toc_yypact
#define yyr1		toc_yyr1
#define yyr2		toc_yyr2
#define yydef		toc_yydef
#define yychk		toc_yychk
#define yypgo		toc_yypgo
#define yyact		toc_yyact
#define yyexca		toc_yyexca
#define yyerrflag	toc_yyerrflag
#define yynerrs		toc_yynerrs
#define yyps		toc_yyps
#define yypv		toc_yypv
#define yys		toc_yys
#define yy_yys		toc_yy_yys
#define yystate		toc_yystate
#define yytmp		toc_yytmp
#define yyv		toc_yyv
#define yy_yyv		toc_yy_yyv
#define yyval		toc_yyval
#define yylloc		toc_yylloc
#define yyreds		toc_yyreds
#define yytoks		toc_yytoks
#define yylhs		toc_yylhs
#define yylen		toc_yylen
#define yydefred	toc_yydefred
#define yydgoto		toc_yydgoto
#define yysinde		toc_yysindex
#define yyrindex	toc_yyrindex
#define yygindex	toc_yygindex
#define yytable		toc_yytable
#define yycheck		toc_yycheck
#define yyname		toc_yyname
#define yyrule		toc_yyrule
