@interface SCRTextUtilities : NSObject

+ (void)addBoundaryForText:(id)a0 uiElement:(id)a1 edge:(long long)a2 request:(id)a3;
+ (void)addReachedBeginningOfTextDescriptionForText:(id)a0 request:(id)a1;
+ (void)addReachedBoundarySoundForText:(id)a0 request:(id)a1;
+ (void)addReachedEndOfTextDescriptionForText:(id)a0 request:(id)a1;
+ (char)advanceInsertionPointForTextArea:(id)a0 startElement:(id)a1 direction:(long long)a2 granularity:(long long)a3 request:(id)a4;
+ (char)echoIndentationInElement:(id)a0 afterDeletingString:(id)a1 atLocation:(id)a2 request:(id)a3;
+ (char)echoIndentationInElement:(id)a0 afterInsertion:(id)a1 request:(id)a2;
+ (char)readCurrentLine:(id)a0 variants:(id)a1 request:(id)a2;
+ (char)setSelectionForText:(id)a0 inDirection:(long long)a1 request:(id)a2;

@end
