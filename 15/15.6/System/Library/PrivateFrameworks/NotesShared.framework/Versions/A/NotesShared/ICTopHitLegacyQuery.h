@class NSString;

@interface ICTopHitLegacyQuery : ICSearchQuery {
    char _modernResultsOnly;
}

@property (retain, nonatomic) NSString *queryString;
@property (retain, nonatomic) NSString *keyboardLanguage;
@property (readonly, nonatomic) NSString *highlightString;

- (void).cxx_destruct;
- (double)timeoutInterval;
- (id)initWithQueryString:(id)a0 keyboardLanguage:(id)a1;
- (char)modernResultsOnly;
- (id)newSearchQueryContext;
- (id)newSearchQueryWithContext:(id)a0;

@end
