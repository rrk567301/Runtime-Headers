@class CSPipelineCompletenessReportStorage;
@protocol CSDonationProgressFetching;

@interface CSIndexingPipelineCompletenessCollector : NSObject {
    CSPipelineCompletenessReportStorage *_pipelineCompleteness;
    id<CSDonationProgressFetching> _donationProgressFetcher;
}

+ (id)defaultInstance;

- (void)fetchIndexingPipelineCompleteness:(id)a0 forBundles:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchIndexingPipelineOverallCompleteness:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithPipelineCompletenessStorage:(id)a0 donationProgressFetcher:(id)a1;

@end
