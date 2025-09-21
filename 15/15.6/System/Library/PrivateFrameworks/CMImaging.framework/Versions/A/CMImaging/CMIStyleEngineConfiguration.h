@interface CMIStyleEngineConfiguration : NSObject <NSCopying>

@property (nonatomic) struct CGSize { double width; double height; } thumbnailSize;
@property (nonatomic) unsigned long long linearSystemType;
@property (nonatomic) unsigned long long linearSystemOrder;
@property (nonatomic) unsigned long long linearSystemSolver;
@property (nonatomic) unsigned int weightPlaneCount;
@property (nonatomic) void /* unknown type, empty encoding */ spotlightCount;
@property (nonatomic) char inputIsLinear;
@property (nonatomic) char outputShouldBeLinear;
@property (nonatomic) char inputThumbnailIsLinear;
@property (nonatomic) char inputThumbnailForLearningIsLinear;
@property (nonatomic) char inputThumbnailForLearningWeightsIsLinear;
@property (nonatomic) char inputThumbnailForIntegrationIsLinear;
@property (nonatomic) char inputThumbnailForResidualCorrectionIsLinear;
@property (nonatomic) char targetThumbnailIsLinear;
@property (nonatomic) char targetThumbnailForLearningIsLinear;
@property (nonatomic) char targetThumbnailForResidualCorrectionIsLinear;
@property (nonatomic) char createAndSolveGlobalLinearSystem;
@property (nonatomic) float globalLinearSystemMixFactor;
@property (nonatomic) char inputCoefficientsF16;
@property (nonatomic) char outputCoefficientsF16;
@property (nonatomic) char fastStyleApplication;
@property (nonatomic) char applyDithering;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } linearSystemPriorMatrix;
@property (nonatomic) char useBicubicIntegration;
@property (nonatomic) char shouldFlushCVMTLTextureCacheAfterProcessing;
@property (nonatomic) char shouldFlushCVMTLBufferCacheAfterProcessing;
@property (nonatomic) unsigned long long filterForInputLearningThumbnailCreation;
@property (nonatomic) unsigned long long filterForInputLearningWeightsThumbnailCreation;
@property (nonatomic) unsigned long long filterForInputIntegrationThumbnailCreation;
@property (nonatomic) unsigned long long filterForInputResidualCorrectionThumbnailCreation;
@property (nonatomic) unsigned long long filterForTargetLearningThumbnailCreation;
@property (nonatomic) unsigned long long filterForTargetResidualCorrectionThumbnailCreation;
@property (nonatomic) char applySyntheticNoise;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;

@end
