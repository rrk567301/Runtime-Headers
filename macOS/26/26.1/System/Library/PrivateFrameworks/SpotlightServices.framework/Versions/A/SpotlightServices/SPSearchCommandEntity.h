@class NSString, CSSuggestion, SFCommand, SFImage;

@interface SPSearchCommandEntity : SPSearchEntity {
    NSString *_symbolName;
    SFImage *_tokenImage;
    SFCommand *_performCommand;
    CSSuggestion *_searchModel;
}

+ (BOOL)supportsSecureCoding;

- (id)queryString;
- (void)updateSearchString:(id)a0;
- (id)symbolName;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)currentSearchString;
- (id)command;
- (id)spotlightQueryString;
- (BOOL)isCommandEntitySearch;
- (BOOL)isPhotosEntitySearch;
- (BOOL)isScopedSearch;
- (BOOL)isServerEntitySearch;
- (id)spotlightFilterQueries;
- (id)tokenImage;
- (id)initWithCommand:(id)a0 fromSuggestion:(BOOL)a1;
- (id)initWithSpotlightSuggestion:(id)a0 symbolName:(id)a1 fromSuggestion:(BOOL)a2;
- (id)symbolImageWithSymbolName:(id)a0;

@end
