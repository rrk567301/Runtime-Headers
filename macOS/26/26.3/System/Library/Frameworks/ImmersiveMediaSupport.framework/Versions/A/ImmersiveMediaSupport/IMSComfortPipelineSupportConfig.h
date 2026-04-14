@protocol IMSComfortPipelineInputProvider;

@interface IMSComfortPipelineSupportConfig : NSObject

@property (weak) id<IMSComfortPipelineInputProvider> inputProvider;
@property int pipelineFrameRate;
@property int cropFrameWidth;
@property int cropFrameHeight;
@property float cropFOVVerticalDegree;

- (BOOL)validate;
- (void).cxx_destruct;

@end
