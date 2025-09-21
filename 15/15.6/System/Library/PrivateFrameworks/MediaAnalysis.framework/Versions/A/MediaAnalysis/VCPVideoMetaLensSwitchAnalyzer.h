@interface VCPVideoMetaLensSwitchAnalyzer : NSObject

@property (nonatomic) char hadZoom;
@property (nonatomic) float minZoom;
@property (nonatomic) float maxZoom;
@property (nonatomic) char settlingHadZoom;
@property (nonatomic) float settlingMinZoom;
@property (nonatomic) float settlingMaxZoom;

- (id)init;
- (id)results;

@end
