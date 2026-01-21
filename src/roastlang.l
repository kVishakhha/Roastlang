/* roastlang.l - Enhanced lexer with arrays, input, loops (V2.0) */
%{
#include "ast.h"
#include "roastlang.tab.h"
void yyerror(const char *s);
%}

%%
"roast"             { return T_ROAST; }
"is"                { return T_ASSIGN; }
"burn"              { return T_BURN; }
"sip"               { return T_READ; }
"~"                 { return T_TILDE; }
"exit"              { return T_EXIT; }
"check"             { return T_CHECK; }
"if"                { return T_IF; }
"then"              { return T_THEN; }
"ouch"              { return T_OUCH; }
"else"              { return T_ELSE; }
"mic drop"          { return T_MICDROP; }
"keep going"        { return T_KEEP; }
"while"             { return T_WHILE; }
"nevermind"         { return T_NEVERMIND; }
"roast fire"        { return T_FOR; }
"from"              { return T_FROM; }
"to"                { return T_TO; }
"toast"             { return T_TOAST; }
"stop roasting"     { return T_BREAK; }
"skip ahead"        { return T_CONTINUE; }
"array"             { return T_ARRAY; }
"=="                { return T_EQ; }
"!="                { return T_NEQ; }
">="                { return T_GTE; }
"<="                { return T_LTE; }
">"                 { return T_GT; }
"<"                 { return T_LT; }
"%"                 { return T_MOD; }
"**"                { return T_POW; }
"+"                 { return '+'; }
"-"                 { return '-'; }
"*"                 { return '*'; }
"/"                 { return '/'; }
"("                 { return '('; }
")"                 { return ')'; }
"["                 { return '['; }
"]"                 { return ']'; }
"{"                 { return '{'; }
"}"                 { return '}'; }
","                 { return ','; }

"#"[^\n]* ; /* Comments */

[a-zA-Z_][a-zA-Z0-9_]* { yylval.sval = strdup(yytext); return T_ID; }
[0-9]+              { yylval.ival = atoi(yytext); return T_NUM; }
\"[^\"]*\"          {
    yytext[strlen(yytext)-1] = '\0';
    yylval.sval = strdup(yytext+1);
    return T_STRING;
}
[ \t\n]+            { }
.                   { fprintf(stderr, "Unknown token: %s\n", yytext); }
%%

int yywrap(void) { return 1; }
