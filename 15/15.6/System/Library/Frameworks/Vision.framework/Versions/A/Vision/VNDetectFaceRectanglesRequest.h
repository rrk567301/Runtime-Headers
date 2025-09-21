@class NSIndexSet, NSNumber, NSArray;

@interface VNDetectFaceRectanglesRequest : VNImageBasedRequest

@property (class, readonly, copy, nonatomic) NSIndexSet *revisionsSupportingPrecisionRecallThresholdOverride;

@property (readonly, copy, nonatomic) NSNumber *precisionRecallThresholdOverride;
@property (nonatomic) unsigned long long faceCoreType;
@property (retain, nonatomic) NSNumber *faceCoreMinFaceSize;
@property (retain, nonatomic) NSNumber *faceCoreNumberOfDetectionAngles;
@property (retain, nonatomic) NSNumber *faceCoreInitialAngle;
@property (nonatomic) char faceCoreEnhanceEyesAndMouthLocalization;
@property (nonatomic) char faceCoreExtractBlink;
@property (nonatomic) char faceCoreExtractSmile;
@property (nonatomic) float precisionRecallThreshold;
@property (readonly, nonatomic) char canOverridePrecisionRecallThreshold;
@property (readonly, copy) NSArray *results;

+ (Class)configurationClass;
+ (id)descriptionForPrivateRevision:(unsigned long long)a0;
+ (id)privateRevisionsSet;
+ (char)recordSpecifierModelEquivalenciesInRegistrar:(id)a0 error:(id *)a1;
+ (char)revision:(unsigned long long)a0 mayAcceptResultsProducedByRevision:(unsigned long long)a1;
+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;

- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (void)applyConfigurationOfRequest:(id)a0;
- (long long)dependencyProcessingOrdinality;
- (char)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (void)resetPrecisionRecallThreshold;
- (void)setProcessedResults:(id)a0;
- (char)warmUpSession:(id)a0 error:(id *)a1;
- (char)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;

@end
