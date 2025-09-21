@interface SearchUITLKMultilineTextConverter : NSObject

+ (void)applyRichText:(id)a0 toTLKRichText:(id)a1 isAsync:(char)a2;
+ (id)formattedTextForSearchUIText:(id)a0;
+ (id)richTextForSearchUIText:(id)a0;
+ (id)richTextForSearchUIText:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (char)richTextOverridesAsyncLoader:(id)a0;
+ (id)textForSearchUIString:(id)a0;
+ (id)textForSearchUIText:(id)a0;

@end
