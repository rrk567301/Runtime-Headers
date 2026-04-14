@class CSSearchQuery, NSString, NSArray, CSSearchQueryContext;

@interface SKDBaseCSQueryProcessingJob : SKDBaseCSItemProcessingJob {
    NSArray *_pipelineQueries;
    NSString *_queryString;
    CSSearchQueryContext *_queryContext;
    CSSearchQuery *_query;
}

@property (readonly, nonatomic) NSString *queryString;
@property (readonly, nonatomic) CSSearchQueryContext *queryContext;
@property (readonly, nonatomic) CSSearchQuery *query;

- (void)configure;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 version:(id)a1 pipelines:(id)a2;
- (id)pipelineQueries;
- (void)setPipelineQueries:(id)a0;
- (void)setQueryString:(id)a0 queryContext:(id)a1 query:(id)a2;
- (id)supportedQueryForPipeline:(id)a0;

@end
