@interface UINSSearchSuggestionsShadowTextField : NSSearchField

@property (nonatomic) char isFirstResponderOverrideValue;

- (char)_searchSuggestionsFirstResponderOverrideEnabled;
- (char)_searchSuggestionsFirstResponderOverrideValue;

@end
