@class NSString, NSDictionary;

@interface SPSearchPhotosEntity : SPSearchEntity {
    NSString *_searchString;
    NSString *_queryString;
    NSString *_spotlightQueryString;
    NSDictionary *_rankCategories;
    NSDictionary *_rankTerms;
    BOOL _isNLP;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)symbolName;
- (id)searchString;
- (id)queryString;
- (void)updateSearchString:(id)a0;
- (id)spotlightQueryString;
- (id)spotlightFilterQueries;
- (BOOL)isScopedSearch;
- (id)initWithPhotosSearchString:(id)a0 spotlightQueryString:(id)a1 rankCategories:(id)a2 rankTerms:(id)a3 isNLQuery:(BOOL)a4 includeSyndicatedPhotos:(BOOL)a5 fromSuggestion:(BOOL)a6;
- (BOOL)isPhotosEntitySearch;
- (BOOL)isNLPEntitySearch;
- (id)tokenText;

@end
