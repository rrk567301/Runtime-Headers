@class NSString;

@interface CHSynthesisReplacementRecipe : NSObject

@property (readonly) NSString *originalString;
@property (readonly) NSString *replacementString;
@property (readonly) long long synthesisSuggestion;

- (void).cxx_destruct;
- (id)initWithOriginalString:(id)a0 replacementString:(id)a1 synthesisSuggestion:(long long)a2;

@end
