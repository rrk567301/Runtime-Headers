@class NSString, CMCaptureFrameSenderService;

@interface BWFrameSenderInputVideoEndpointProviderNode : BWNode {
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    CMCaptureFrameSenderService *_frameSender;
}

@property (retain, nonatomic) NSString *captureDeviceUniqueID;

+ (void)initialize;

- (id)nodeType;
- (id)nodeSubType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)init;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;

@end
