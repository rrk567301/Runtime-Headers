@interface CLSAssetScoringContext : NSObject

@property (nonatomic) double viewCountThreshold;
@property (nonatomic) double playCountThreshold;
@property (nonatomic) char shouldEmphasizeShared;
@property (nonatomic) char shouldEmphasizeAdjusted;
@property (nonatomic) char shouldEmphasizePanorama;
@property (nonatomic) char shouldEmphasizeLive;
@property (nonatomic) char shouldEmphasizeBurst;
@property (nonatomic) char shouldEmphasizeSDOF;
@property (nonatomic) short audioClassificationsToEmphasize;
@property (nonatomic) double aestheticScoreThresholdToBeAwesome;

@end
