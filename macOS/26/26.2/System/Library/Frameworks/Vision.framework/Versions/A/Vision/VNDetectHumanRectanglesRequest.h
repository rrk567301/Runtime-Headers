@class NSArray;

@interface VNDetectHumanRectanglesRequest : VNImageBasedRequest

@property (nonatomic) BOOL upperBodyOnly;
@property (readonly, copy) NSArray *results;

+ (id)privateRevisionsSet;
+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; struct { int x0; int x1; } x4; } *)revisionAvailability;
+ (Class)configurationClass;
+ (id)descriptionForPrivateRevision:(unsigned long long)a0;
+ (BOOL)revisionSupportsFullBodyDetection:(unsigned long long)a0;
+ (BOOL)revision:(unsigned long long)a0 mayAcceptResultsProducedByRevision:(unsigned long long)a1;

- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (long long)dependencyProcessingOrdinality;
- (void)applyConfigurationOfRequest:(id)a0;
- (void)resolvedRevisionDidChangeFromRevision:(unsigned long long)a0;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)description;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;

@end
