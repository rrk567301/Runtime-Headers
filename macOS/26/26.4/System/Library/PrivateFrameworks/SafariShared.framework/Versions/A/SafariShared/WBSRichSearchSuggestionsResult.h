@class NSMutableDictionary;

@interface WBSRichSearchSuggestionsResult : NSObject <NSSecureCoding> {
    NSMutableDictionary *_richSearchSuggestionsDictionary;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)addRichSearchSuggestion:(id)a0 forSearchString:(id)a1;
- (id)richSearchSuggestionsForSearchString:(id)a0;

@end
