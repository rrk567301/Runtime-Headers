@class NSArray, NSNumber;

@interface VNCompoundRequest : VNRequest {
    NSNumber *_cachedDependencyProcessingOrdinality;
}

@property (readonly, copy, nonatomic) NSArray *originalRequests;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } regionOfInterest;

+ (BOOL)warmUpSession:(id)a0 error:(id *)a1;
+ (id)compoundRequestsForOriginalRequests:(id)a0 withPerformingContext:(id)a1 error:(id *)a2;
+ (id)compoundRequestProcessingDeviceFromOriginalRequestsProcessingDevice:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (BOOL)usesCPUOnly;
- (long long)dependencyProcessingOrdinality;
- (BOOL)warmUpSession:(id)a0 error:(id *)a1;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)initWithOriginalRequests:(id)a0;
- (id)sequencedRequestPreviousObservationsKey;
- (BOOL)allowsCachingOfResults;
- (id /* block */)resultsSortingComparator;
- (BOOL)resultsAreAssignedWithOriginatingRequestSpecifier;
- (id)compoundResults;
- (void)recordWarningsInOriginalRequests;

@end
