@class NSString, CMCaptureFrameSenderService;

@interface BWFrameSenderInputVideoEndpointProviderNode : BWNode {
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    CMCaptureFrameSenderService *_frameSender;
}

@property (retain, nonatomic) NSString *captureDeviceUniqueID;

+ (void)initialize;

- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)didReachEndOfDataForInput:(id)a0;
- (id)nodeSubType;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)dealloc;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (id)init;

@end
