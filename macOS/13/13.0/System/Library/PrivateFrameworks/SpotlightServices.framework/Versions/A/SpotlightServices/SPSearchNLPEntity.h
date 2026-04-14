@class NSString, NSDictionary;

@interface SPSearchNLPEntity : SPSearchEntity {
    NSString *_searchString;
    NSString *_queryString;
    NSString *_spotlightQueryString;
    NSDictionary *_rankCategories;
    NSDictionary *_rankTerms;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)searchString;
- (void)updateSearchString:(id)a0;
- (id)queryString;
- (id)spotlightQueryString;
- (BOOL)isNLPEntitySearch;
- (id)spotlightRankTerms;
- (id)spotlightRankCategories;
- (id)initWithSearchString:(id)a0 spotlightQueryString:(id)a1 spotlightRankCategories:(id)a2 spotlightRankTerms:(id)a3 fromSuggestion:(BOOL)a4;

@end
