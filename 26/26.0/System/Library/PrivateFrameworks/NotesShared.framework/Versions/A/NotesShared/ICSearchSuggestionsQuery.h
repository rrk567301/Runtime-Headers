@class NSString, NSArray, NSMutableArray;
@protocol ICSearchSuggestionsResponder;

@interface ICSearchSuggestionsQuery : ICSearchQuery {
    BOOL _modernResultsOnly;
}

@property (retain, nonatomic) NSString *userSearchString;
@property (retain, nonatomic) NSString *literalSearchString;
@property (retain, nonatomic) NSString *searchString;
@property (retain, nonatomic) NSArray *searchTokens;
@property (retain, nonatomic) NSArray *filterQueries;
@property (retain, nonatomic) NSArray *topHits;
@property (retain, nonatomic) NSMutableArray *foundSuggestions;
@property (retain, nonatomic) id<ICSearchSuggestionsResponder> suggestionsResponder;

- (void).cxx_destruct;
- (id)initWithSearchString:(id)a0 additionalLiteralSearchString:(id)a1 searchTokens:(id)a2 filterQueries:(id)a3 rankingQueriesDefinition:(id)a4 modernResultsOnly:(BOOL)a5 suggestionsResponder:(id)a6;
- (BOOL)modernResultsOnly;
- (id)newSearchQueryContext;
- (id)newSearchQueryWithContext:(id)a0;
- (void)queryFinishedRunningWithError:(id)a0;
- (id)queryResultsToAddFromBatch:(id)a0;

@end
