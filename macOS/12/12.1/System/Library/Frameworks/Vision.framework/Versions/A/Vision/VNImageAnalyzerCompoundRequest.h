@class VNImageAnalyzerCompoundRequestGroupingConfiguration;

@interface VNImageAnalyzerCompoundRequest : VNCompoundRequest {
    VNImageAnalyzerCompoundRequestGroupingConfiguration *_groupingConfiguration;
}

+ (BOOL)warmUpSession:(id)a0 error:(id *)a1;
+ (id)compoundRequestsForOriginalRequests:(id)a0 withPerformingContext:(id)a1 error:(id *)a2;
+ (Class)configurationClass;

- (void).cxx_destruct;
- (BOOL)warmUpSession:(id)a0 error:(id *)a1;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;
- (BOOL)allowsCachingOfResults;
- (id /* block */)resultsSortingComparator;
- (id)initWithDetectorType:(id)a0 groupingConfiguration:(id)a1;

@end
