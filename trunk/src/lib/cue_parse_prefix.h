/*
 * cue_parse_prefix.h -- yacc symbol redefinitions (for cue parser)
 *
 *
 * Copyright (C) 2004, 2005, 2006, 2007 Svend Sorensen
 * For license terms, see the file COPYING in this distribution.
 */

/* Remap normal yacc names so we can have multiple parsers
 * see http://www.gnu.org/software/automake/manual/html_node/Yacc-and-Lex.html
 */

#define yymaxdepth	cue_yymaxdepth
#define yyparse		cue_yyparse
#define yylex		cue_yylex
#define yyerror		cue_yyerror
#define yylval		cue_yylval
#define yychar		cue_yychar
#define yydebug		cue_yydebug
#define yypact		cue_yypact
#define yyr1		cue_yyr1
#define yyr2		cue_yyr2
#define yydef		cue_yydef
#define yychk		cue_yychk
#define yypgo		cue_yypgo
#define yyact		cue_yyact
#define yyexca		cue_yyexca
#define yyerrflag	cue_yyerrflag
#define yynerrs		cue_yynerrs
#define yyps		cue_yyps
#define yypv		cue_yypv
#define yys		cue_yys
#define yy_yys		cue_yy_yys
#define yystate		cue_yystate
#define yytmp		cue_yytmp
#define yyv		cue_yyv
#define yy_yyv		cue_yy_yyv
#define yyval		cue_yyval
#define yylloc		cue_yylloc
#define yyreds		cue_yyreds
#define yytoks		cue_yytoks
#define yylhs		cue_yylhs
#define yylen		cue_yylen
#define yydefred	cue_yydefred
#define yydgoto		cue_yydgoto
#define yysinde		cue_yysindex
#define yyrindex	cue_yyrindex
#define yygindex	cue_yygindex
#define yytable		cue_yytable
#define yycheck		cue_yycheck
#define yyname		cue_yyname
#define yyrule		cue_yyrule
