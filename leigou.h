/* 
*	LEIGOU is a MACRO defined using the C/C++ preprocessor directive #define. 
*	It expands to a long multi-line string literal enclosed in double quotes, 
*	with backslashes (\) used to continue the macro across lines. 
*	Whenever LEIGOU appears in the code, the preprocessor replaces it 
*	with that complete string. 
*/

#define LEIGOU "\n\nMi koi in zong mihing tha ama, ganhing tha ama, \n"									\
		"ahilou leh thadawn thei khawl zang a, \n" 														\
		"zuun lou gam-le-lei tang beh khat a puah a, \n" 												\
		"a manphatna a pun sah leh, \n" 																\
		"koima’n ama gim leh tawl gah a thawn in a suuh thei sih ding hi. \n" 							\
		"Adiah in tuilou (zaang lou), thei gam, sing gam, \n" 											\
		"huan chi tuamtuam te leh \n" 																	\
		"mual pang kilaizang (terrace hillside) chite bawl na di’n tha a nem a, \n" 					\
		"na semtu gimgah zatat tah a kepbit ding khu dan leh dun dih tah ahi. \n" 						\
								"\t\t\v David Vumlallian Zou, 2 July 2026\n\n" 							\
																										\
		/* Macro can not be broken by a Blank Line (empty line); so add trailing backslash (\) 	\
		at the end of the line (NOT the beginning) to prevent compilation error  */						\
																										\
		"English ham a lehna: \n" 																		\
		"If a person improves a patch of land or reclaims it \n" 										\
		"from wasteland with human labour, animal labour, or labour-saving tools, \n" 					\
		"none can deprive that person from the fruits of his or her labour. \n" 						\
		"The starting of new paddy fields, horticulture, timber plantation, gardens \n" 				\
		"and hillside terrace are labour-intensive; \n" 												\
		"a just law requires the protection of the fruits of own’s labour.\n" 		
									
			/* You must add a backslash (\) at the very end of each line 			
			to tell the preprocessor that the macro continues on the next line.*/
