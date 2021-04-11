#include"sub.h"

int main( int argc, char *argv[] )
{
	int i;
	
  for( i= 1; i < argc; i+=2 )
  {
	
	
	if( !strcmp( argv[i], "-html" ) )
	{
		sub( argv[ i+1 ], "  ", "&nbsp;&nbsp;" );
		sub( argv[ i+1 ], "\t", "&nbsp;&nbsp;&nbsp;&nbsp;" );
		sub( argv[ i+1 ], "-{", "<i>" );
        sub( argv[ i+1 ], "|{", "&" );
        sub( argv[ i+1 ], "*{", "<b>" );
        sub( argv[ i+1 ], "_{", "<sub>" );
        sub( argv[ i+1 ], "^{", "<sup>" );
        sub( argv[ i+1 ], "#{", "<font face=\"CMU Typewriter Text\"><b>" );
        sub( argv[ i+1 ], "}-", "</i>" );
        sub( argv[ i+1 ], "}*", "</b>" );
        sub( argv[ i+1 ], "}|", ";" );
        sub( argv[ i+1 ], "}_", "</sub>" );
        sub( argv[ i+1 ], "}^", "</sup>" );
        sub( argv[ i+1 ], "}#", "</b></font>" );
        sub( argv[ i+1 ], "<-", "&larr;" );
        sub( argv[ i+1 ], "->", "&rarr;" );
        sub( argv[ i+1 ], "(*)", "&times;" );
        sub( argv[ i+1 ], "/*", "</b>(" );
        sub( argv[ i+1 ], "*/", ")<b>" );
        sub( argv[ i+1 ], "_le_", "&le;" );
        sub( argv[ i+1 ], "_ge_", "&ge;" );
        sub( argv[ i+1 ], "_eq_", "=" );
        sub( argv[ i+1 ], "_ne_", "&ne;" );
        sub( argv[ i+1 ], "_lt_", "&lt;" );
        sub( argv[ i+1 ], "_gt_", "&gt;" );
        sub( argv[ i+1 ], "_or_", "&or;" );
        sub( argv[ i+1 ], "_and_", "&and;" );
        sub( argv[ i+1 ], "_not_", "&sim;" );
        sub( argv[ i+1 ], "_xor_", "&oplus;" );
        sub( argv[ i+1 ], "[[", "&lang;" );
        sub( argv[ i+1 ], "]]", "&rang;" );
	}
	else if( !strcmp( argv[ i ], "-c++" ) )
	{
       	sub( argv[ i+1 ],  "-{", "" );
        sub( argv[ i+1 ],  "|{", "" );
        sub( argv[ i+1 ],  "*{", "" );
        sub( argv[ i+1 ],  "_{", "_" );
        sub( argv[ i+1 ],  "^{", "_" );
        sub( argv[ i+1 ], "#{", "" );
        sub( argv[ i+1 ],  "}-", "" );
        sub( argv[ i+1 ],  "}*", "" );
        sub( argv[ i+1 ],  "}|", "" );
        sub( argv[ i+1 ],  "}_", "" );
        sub( argv[ i+1 ],  "}^", "_" );
        sub( argv[ i+1 ], "}#", "" );
        sub( argv[ i+1 ],  "<-", "=" );
        sub( argv[ i+1 ],  "(*)", "*" );
        sub( argv[ i+1 ],  "_le_", "<=" );
        sub( argv[ i+1 ],  "_ge_", ">=" );
        sub( argv[ i+1 ],  "_eq_", "==" );
        sub( argv[ i+1 ],  "_ne_", "!=" );
        sub( argv[ i+1 ],  "_lt_", "<" );
        sub( argv[ i+1 ],  "_gt_", ">" );
        sub( argv[ i+1 ],  "_or_", "||" );
        sub( argv[ i+1 ],  "_and_", "&&" );
        sub( argv[ i+1 ],  "_not_", "!" );
        sub( argv[ i+1 ],  "_xor_", "^" );
        sub( argv[ i+1 ],  "mod", "%" );
        sub( argv[ i+1 ],  "then", "{" );
        sub( argv[ i+1 ],  "begin", "{" );
        sub( argv[ i+1 ],  "start", "{" );
        sub( argv[ i+1 ],  "stop", "}" );
        sub( argv[ i+1 ],  "end loop", "}" );
        sub( argv[ i+1 ],  "end if", "}" );
        sub( argv[ i+1 ],  "end for", "}" );
        sub( argv[ i+1 ],  "[[", "&lang;" );
        sub( argv[ i+1 ],  "]]", "&rang;" );		
	    	
	}
	
	else if( !strcmp( argv[ i ], "-c" ) )
	{
       	sub( argv[ i+1 ],  "-{", "" );
        sub( argv[ i+1 ],  "|{", "" );
        sub( argv[ i+1 ],  "*{", "" );
        sub( argv[ i+1 ],  "_{", "_" );
        sub( argv[ i+1 ],  "^{", "_" );
        sub( argv[ i+1 ], "#{", "" );
        sub( argv[ i+1 ],  "}-", "" );
        sub( argv[ i+1 ],  "}*", "" );
        sub( argv[ i+1 ],  "}|", "" );
        sub( argv[ i+1 ],  "}_", "" );
        sub( argv[ i+1 ],  "}^", "_" );
        sub( argv[ i+1 ], "}#", "" );
        sub( argv[ i+1 ],  "<-", "=" );
        sub( argv[ i+1 ],  "(*)", "*" );
        sub( argv[ i+1 ],  "_le_", "<=" );
        sub( argv[ i+1 ],  "_ge_", ">=" );
        sub( argv[ i+1 ],  "_eq_", "==" );
        sub( argv[ i+1 ],  "_ne_", "!=" );
        sub( argv[ i+1 ],  "_lt_", "<" );
        sub( argv[ i+1 ],  "_gt_", ">" );
        sub( argv[ i+1 ],  "_or_", "||" );
        sub( argv[ i+1 ],  "_and_", "&&" );
        sub( argv[ i+1 ],  "_not_", "!" );
        sub( argv[ i+1 ],  "_xor_", "^" );
        sub( argv[ i+1 ],  "mod", "%%" );
        sub( argv[ i+1 ],  "then", "{" );
        sub( argv[ i+1 ],  "begin", "{" );
        sub( argv[ i+1 ],  "start", "{" );
        sub( argv[ i+1 ],  "stop", "}" );
        sub( argv[ i+1 ],  "end loop", "}" );
        sub( argv[ i+1 ],  "end if", "}" );
        sub( argv[ i+1 ],  "end for", "}" );
        sub( argv[ i+1 ],  "[[", "&lang;" );
        sub( argv[ i+1 ],  "]]", "&rang;" );		
	    	
	}
	
	else if( !strcmp( argv[ i ], "-python" ) )
	{
       	sub( argv[ i+1 ],  "-{", "" );
        sub( argv[ i+1 ],  "|{", "" );
        sub( argv[ i+1 ],  "*{", "" );
        sub( argv[ i+1 ],  "_{", "_" );
        sub( argv[ i+1 ],  "^{", "_" );
        sub( argv[ i+1 ], "#{", "" );
        sub( argv[ i+1 ],  "}-", "" );
        sub( argv[ i+1 ],  "}*", "" );
        sub( argv[ i+1 ],  "}|", "" );
        sub( argv[ i+1 ],  "}_", "" );
        sub( argv[ i+1 ],  "}^", "_" );
        sub( argv[ i+1 ], "}#", "" );
        sub( argv[ i+1 ],  "<-", "=" );
        sub( argv[ i+1 ],  "(*)", "*" );
        sub( argv[ i+1 ], "/*", "#" );
        sub( argv[ i+1 ], "*/", "\n" );
        sub( argv[ i+1 ],  "_le_", "<=" );
        sub( argv[ i+1 ],  "_ge_", ">=" );
        sub( argv[ i+1 ],  "_eq_", "==" );
        sub( argv[ i+1 ],  "_ne_", "!=" );
        sub( argv[ i+1 ],  "_lt_", "<" );
        sub( argv[ i+1 ],  "_gt_", ">" );
        sub( argv[ i+1 ],  "_or_", "||" );
        sub( argv[ i+1 ],  "_and_", "&&" );
        sub( argv[ i+1 ],  "_not_", "!" );
        sub( argv[ i+1 ],  "_xor_", "^" );
        sub( argv[ i+1 ],  "mod", "%%" );
        sub( argv[ i+1 ],  "then", "{" );
        sub( argv[ i+1 ],  "begin", "{" );
        sub( argv[ i+1 ],  "start", "{" );
        sub( argv[ i+1 ],  "stop", "}" );
        sub( argv[ i+1 ],  "end loop", "}" );
        sub( argv[ i+1 ],  "end if", "}" );
        sub( argv[ i+1 ],  "end for", "}" );
        sub( argv[ i+1 ],  "[[", "&lang;" );
        sub( argv[ i+1 ],  "]]", "&rang;" );		
	    	
	}
		
 }
	return 0;
	
}
