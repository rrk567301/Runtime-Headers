@class NSArray, NSDictionary, NSNumber, WBSRichSearchSuggestionsResult;

@interface WBSSearchSuggestionsFetcherResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *suggestions;
@property (copy, nonatomic) NSDictionary *postFixSuggestions;
@property (retain, nonatomic) NSNumber *prefixNavigationalIntent;
@property (nonatomic) BOOL autocompleteToFirstSuggestion;
@property (copy, nonatomic) WBSRichSearchSuggestionsResult *richSearchSuggestionsResult;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithSuggestions:(id)a0;

@end
