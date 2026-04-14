@class GVSOverscanPredictor, NSDictionary;
@protocol BWVISOverscanPredictionDelegate;

@interface BWVISOverscanPredictionNode : BWNode {
    GVSOverscanPredictor *_visOverscanPredictor;
    NSDictionary *_cameraInfoByPortType;
    float _visInputAspectRatio;
    id<BWVISOverscanPredictionDelegate> _delegate;
}

+ (void)initialize;

- (id)nodeSubType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)dealloc;
- (id)initWithCameraInfoByPortType:(id)a0 visInputAspectRatio:(float)a1 delegate:(id)a2;

@end
