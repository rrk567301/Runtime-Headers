@class BWPhotoEncoderController, BWStillImageNodeConfiguration;

@interface BWPiecemealEncodingNode : BWNode {
    BWStillImageNodeConfiguration *_nodeConfiguration;
    BWPhotoEncoderController *_photoEncoderController;
}

+ (void)initialize;

- (void)didReachEndOfDataForConfigurationID:(id)a0 input:(id)a1;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)nodeType;
- (void)dealloc;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)_releaseResources;
- (id)initWithNodeConfiguration:(id)a0;
- (void)sharePhotoEncoderControllerForPiecemealEncoding:(id)a0;

@end
