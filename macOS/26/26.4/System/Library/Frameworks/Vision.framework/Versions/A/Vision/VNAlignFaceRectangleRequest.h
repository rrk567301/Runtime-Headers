@class NSArray;

@interface VNAlignFaceRectangleRequest : VNRequest

@property (readonly, copy, nonatomic) NSArray *inputFaceObservations;
@property (readonly, copy) NSArray *results;

+ (Class)configurationClass;

- (long long)dependencyProcessingOrdinality;
- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)resultsAreAssignedWithOriginatingRequestSpecifier;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)initWithFaceObservations:(id)a0;
- (id)initWithFaceObservations:(id)a0 completionHandler:(id /* block */)a1;
- (id)newDuplicateInstance;

@end
