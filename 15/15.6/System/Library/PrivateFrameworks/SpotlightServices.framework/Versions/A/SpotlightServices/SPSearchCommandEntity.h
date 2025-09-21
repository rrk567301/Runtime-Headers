@class NSString, SFCommand, CSSuggestion;

@interface SPSearchCommandEntity : SPSearchEntity {
    NSString *_symbolName;
    SFCommand *_performCommand;
    CSSuggestion *_searchModel;
}

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)symbolName;
- (id)command;
- (id)queryString;
- (id)spotlightQueryString;
- (void)updateSearchString:(id)a0;
- (id)currentSearchString;
- (char)isCommandEntitySearch;
- (char)isPhotosEntitySearch;
- (char)isScopedSearch;
- (char)isServerEntitySearch;
- (id)spotlightFilterQueries;
- (id)initWithCommand:(id)a0 fromSuggestion:(char)a1;
- (id)initWithSpotlightSuggestion:(id)a0 symbolName:(id)a1 fromSuggestion:(char)a2;

@end
