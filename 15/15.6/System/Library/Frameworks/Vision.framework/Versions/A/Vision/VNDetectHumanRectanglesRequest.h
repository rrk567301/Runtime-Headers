@class NSArray;

@interface VNDetectHumanRectanglesRequest : VNImageBasedRequest

@property (nonatomic) char upperBodyOnly;
@property (readonly, copy) NSArray *results;

+ (Class)configurationClass;
+ (id)descriptionForPrivateRevision:(unsigned long long)a0;
+ (id)privateRevisionsSet;
+ (char)revision:(unsigned long long)a0 mayAcceptResultsProducedByRevision:(unsigned long long)a1;
+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;
+ (char)revisionSupportsFullBodyDetection:(unsigned long long)a0;

- (id)description;
- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (void)applyConfigurationOfRequest:(id)a0;
- (long long)dependencyProcessingOrdinality;
- (char)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (void)resolvedRevisionDidChangeFromRevision:(unsigned long long)a0;
- (char)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;

@end
