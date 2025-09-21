@interface MAFlashingLightsProcessorResult : NSObject

@property (nonatomic) char surfaceProcessed;
@property (nonatomic) float mitigationLevel;
@property (nonatomic) float intensityLevel;

- (id)description;

@end
