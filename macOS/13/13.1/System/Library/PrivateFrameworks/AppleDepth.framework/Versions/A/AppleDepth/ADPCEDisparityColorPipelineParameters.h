@interface ADPCEDisparityColorPipelineParameters : ADPipelineParameters

@property (nonatomic) unsigned long long trainingWidth;
@property (nonatomic) float disparityScaleForModelZoom;
@property (nonatomic) float minDisparity;
@property (nonatomic) float maxDisparity;
@property (nonatomic) float pceBias;

- (id)init;

@end
