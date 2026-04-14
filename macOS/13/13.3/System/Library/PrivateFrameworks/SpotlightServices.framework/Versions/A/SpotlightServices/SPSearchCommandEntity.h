@class NSString, SFPerformEntityQueryCommand;

@interface SPSearchCommandEntity : SPSearchEntity {
    NSString *_tokenText;
    NSString *_searchString;
    SFPerformEntityQueryCommand *_performCommand;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)symbolName;
- (id)command;
- (id)searchString;
- (id)spotlightQueryString;
- (id)tokenText;
- (void)updateSearchString:(id)a0;
- (BOOL)isCommandEntitySearch;
- (BOOL)isScopedSearch;
- (BOOL)isServerEntitySearch;
- (id)initWithCommand:(id)a0 fromSuggestion:(BOOL)a1;

@end
