@interface ADBinocularDepthPipelineParameters : ADPipelineParameters

@property (nonatomic) unsigned long long confidenceUnits;
@property (nonatomic) float rectifiedCameraFieldOfViewWidth;
@property (nonatomic) float rectifiedCameraFieldOfViewHeight;

- (id)init;

@end
