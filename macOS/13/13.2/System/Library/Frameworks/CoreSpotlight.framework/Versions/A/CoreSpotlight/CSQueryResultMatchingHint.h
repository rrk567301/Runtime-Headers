@class NSString, NSArray;

@interface CSQueryResultMatchingHint : NSObject

@property (readonly, copy) NSString *attribute;
@property (readonly, copy) NSArray *tokens;

+ (id)randomTokensFromText:(id)a0 maxTokens:(unsigned long long)a1 maxTextLength:(unsigned long long)a2;
+ (id)_snippetHintAttributeSet;

- (id)description;
- (void).cxx_destruct;
- (id)initWithAttribute:(id)a0 tokens:(id)a1;
- (BOOL)isValidAttributeForSnippetHint:(id)a0;
- (id)initWithBackingHint:(id)a0;
- (id)flattenedHints;

@end
