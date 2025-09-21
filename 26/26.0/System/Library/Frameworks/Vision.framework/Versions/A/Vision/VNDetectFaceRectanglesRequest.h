@class NSIndexSet, NSNumber, NSArray;

@interface VNDetectFaceRectanglesRequest : VNImageBasedRequest

@property (class, readonly, copy, nonatomic) NSIndexSet *revisionsSupportingPrecisionRecallThresholdOverride;

@property (readonly, copy, nonatomic) NSNumber *precisionRecallThresholdOverride;
@property (nonatomic) unsigned long long faceCoreType;
@property (retain, nonatomic) NSNumber *faceCoreMinFaceSize;
@property (retain, nonatomic) NSNumber *faceCoreNumberOfDetectionAngles;
@property (retain, nonatomic) NSNumber *faceCoreInitialAngle;
@property (nonatomic) BOOL faceCoreEnhanceEyesAndMouthLocalization;
@property (nonatomic) BOOL faceCoreExtractBlink;
@property (nonatomic) BOOL faceCoreExtractSmile;
@property (nonatomic) float precisionRecallThreshold;
@property (readonly, nonatomic) BOOL canOverridePrecisionRecallThreshold;
@property (readonly, copy) NSArray *results;

+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; struct { int x0; int x1; } x4; } *)revisionAvailability;
+ (BOOL)revision:(unsigned long long)a0 mayAcceptResultsProducedByRevision:(unsigned long long)a1;
+ (id)privateRevisionsSet;
+ (BOOL)recordSpecifierModelEquivalenciesInRegistrar:(id)a0 error:(id *)a1;
+ (Class)configurationClass;
+ (id)descriptionForPrivateRevision:(unsigned long long)a0;

- (long long)dependencyProcessingOrdinality;
- (void)applyConfigurationOfRequest:(id)a0;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (void)resetPrecisionRecallThreshold;
- (void)setProcessedResults:(id)a0;
- (BOOL)warmUpSession:(id)a0 error:(id *)a1;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;

@end
