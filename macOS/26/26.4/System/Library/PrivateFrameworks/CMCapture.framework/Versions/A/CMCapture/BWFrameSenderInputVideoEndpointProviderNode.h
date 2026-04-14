@class NSString, CMCaptureFrameSenderService;

@interface BWFrameSenderInputVideoEndpointProviderNode : BWNode {
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    CMCaptureFrameSenderService *_frameSender;
}

@property (retain, nonatomic) NSString *captureDeviceUniqueID;

+ (void)initialize;

- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didReachEndOfDataForInput:(id)a0;
- (id)nodeType;
- (id)init;
- (void)dealloc;

@end
