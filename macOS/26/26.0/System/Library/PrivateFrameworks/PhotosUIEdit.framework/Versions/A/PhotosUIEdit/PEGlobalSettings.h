@protocol PESettings;

@interface PEGlobalSettings : NSObject

@property (weak, nonatomic) id<PESettings> injectedSettings;
@property (nonatomic) long long targetPointsFillStrategy;
@property (nonatomic) double retouchTargetPointCoverageThreshold;
@property (nonatomic) double cleanupLassoDistance;
@property (nonatomic) double cleanupLassoHeadTailFraction;
@property (nonatomic) double cleanupLassoHeadTailMaxLength;
@property (nonatomic) double cleanupFilledCoverageRatio;
@property (nonatomic) double cleanupShortStrokeLengthThreshold;
@property (nonatomic) double cleanupShortStrokeAngleThreshold;
@property (nonatomic) BOOL skipOnDemandSegmentationOnFaces;
@property (nonatomic) double retouchStrokeIntersectionPercentage;
@property (nonatomic) double subjectExclusionMaskHitRadius;

+ (id)globalSettings;
+ (id)sharedSettings;
+ (void)injectSettings:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_setInitialValues;
- (BOOL)existingBoolValueForKey:(id)a0 withDefaultValue:(BOOL)a1;
- (double)existingFloatValueForKey:(id)a0 withDefaultValue:(double)a1;
- (long long)existingIntegerValueForKey:(id)a0 withDefaultValue:(long long)a1;

@end
