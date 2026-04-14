@class NSIndexSet, NSNumber, NSArray;

@interface VNDetectHumanHeadRectanglesRequest : VNImageBasedRequest

@property (class, readonly, copy, nonatomic) NSIndexSet *revisionsSupportingPrecisionRecallThresholdOverride;

@property (readonly, copy, nonatomic) NSNumber *precisionRecallThresholdOverride;
@property (nonatomic) float precisionRecallThreshold;
@property (readonly, nonatomic) BOOL canOverridePrecisionRecallThreshold;
@property (readonly, copy) NSArray *results;

+ (id)privateRevisionsSet;
+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; struct { int x0; int x1; } x4; } *)revisionAvailability;
+ (Class)configurationClass;
+ (id)descriptionForPrivateRevision:(unsigned long long)a0;

- (void)resetPrecisionRecallThreshold;
- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (long long)dependencyProcessingOrdinality;
- (void)applyConfigurationOfRequest:(id)a0;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;

@end
