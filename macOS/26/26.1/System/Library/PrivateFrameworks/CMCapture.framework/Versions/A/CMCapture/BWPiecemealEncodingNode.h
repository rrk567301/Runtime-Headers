@class BWPhotoEncoderController, BWStillImageNodeConfiguration;

@interface BWPiecemealEncodingNode : BWNode {
    BWStillImageNodeConfiguration *_nodeConfiguration;
    BWPhotoEncoderController *_photoEncoderController;
}

+ (void)initialize;

- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)didReachEndOfDataForConfigurationID:(id)a0 input:(id)a1;
- (void)dealloc;
- (void)_releaseResources;
- (id)initWithNodeConfiguration:(id)a0;
- (void)sharePhotoEncoderControllerForPiecemealEncoding:(id)a0;

@end
