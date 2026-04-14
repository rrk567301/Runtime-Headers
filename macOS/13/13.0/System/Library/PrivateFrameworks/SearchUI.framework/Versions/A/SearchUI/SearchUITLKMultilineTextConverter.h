@interface SearchUITLKMultilineTextConverter : NSObject

+ (id)textForSearchUIText:(id)a0;
+ (id)richTextForSearchUIText:(id)a0;
+ (id)textForSearchUIString:(id)a0;
+ (id)richTextForSearchUIText:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)applyRichText:(id)a0 toTLKRichText:(id)a1 isAsync:(BOOL)a2;
+ (BOOL)richTextOverridesAsyncLoader:(id)a0;
+ (id)formattedTextForSearchUIText:(id)a0;

@end
