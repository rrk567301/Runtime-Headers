@class NSString, SFPerformEntityQueryCommand;

@interface SPSearchCommandEntity : SPSearchEntity {
    NSString *_tokenText;
    NSString *_searchString;
    SFPerformEntityQueryCommand *_performCommand;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)symbolName;
- (id)command;
- (id)searchString;
- (void)updateSearchString:(id)a0;
- (id)tokenText;
- (id)spotlightQueryString;
- (BOOL)isServerEntitySearch;
- (BOOL)isScopedSearch;
- (BOOL)isCommandEntitySearch;
- (id)initWithCommand:(id)a0 fromSuggestion:(BOOL)a1;

@end
