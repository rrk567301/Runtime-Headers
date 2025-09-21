@class NSString, NSArray;

@interface ICSearchResultsQuery : ICSearchQuery {
    char _modernResultsOnly;
}

@property (copy, nonatomic) NSString *queryString;
@property (retain, nonatomic) NSArray *attributes;

+ (id)queryForClassifiedImages;

- (void).cxx_destruct;
- (id)attributesToFetch;
- (id)initWithQueryString:(id)a0 rankingQueriesDefinition:(id)a1 modernResultsOnly:(char)a2;
- (id)initWithQueryString:(id)a0 externalRankingQueries:(id)a1 modernResultsOnly:(char)a2;
- (id)initWithQueryString:(id)a0 externalRankingQueries:(id)a1 modernResultsOnly:(char)a2 attributes:(id)a3;
- (char)modernResultsOnly;
- (id)newSearchQueryContext;
- (id)newSearchQueryWithContext:(id)a0;

@end
