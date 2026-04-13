@class NSArray;

@interface VNDetectHumanHandPoseRequest : VNImageBasedRequest

@property unsigned long long maximumHandCount;
@property (readonly, copy) NSArray *results;

+ (Class)configurationClass;
+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;
+ (id)descriptionForPrivateRevision:(unsigned long long)a0;
+ (id)supportedJointNamesForRevision:(unsigned long long)a0 error:(id *)a1;
+ (id)supportedJointsGroupNamesForRevision:(unsigned long long)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)warmUpSession:(id)a0 error:(id *)a1;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)_applicableDetectorAndOptions:(id *)a0 loadedInSession:(id)a1 error:(id *)a2;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;
- (id /* block */)resultsSortingComparator;
- (void)setSortedResults:(id)a0;

@end
