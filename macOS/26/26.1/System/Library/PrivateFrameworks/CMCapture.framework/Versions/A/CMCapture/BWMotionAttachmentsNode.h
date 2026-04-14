@class NSDictionary, BWNodeOutput, BWLimitedGMErrorLogger;

@interface BWMotionAttachmentsNode : BWNode {
    struct OpaqueFigSampleBufferProcessor { } *_sampleBufferProcessor;
    NSDictionary *_optionsDict;
    BWLimitedGMErrorLogger *_limitedGMErrorLogger;
    BOOL _emitMotionAttachmentsSBufForOfflineProResRawVIS;
}

@property (readonly, nonatomic) BWNodeOutput *sourceVideoWithMotionAttachmentsOutput;
@property (readonly, nonatomic) BWNodeOutput *offlineVISMotionDataOutput;
@property (nonatomic) BOOL adjustsValidBufferRectForDarkShade;

+ (void)initialize;

- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)nodeSubType;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (BOOL)hasNonLiveConfigurationChanges;
- (id)initWithSensorIDDictionaryByPortType:(id)a0 cameraInfoByPortType:(id)a1 tuningParameters:(id)a2 activePortTypes:(id)a3 horizontalSensorBinningFactor:(int)a4 verticalSensorBinningFactor:(int)a5 maxSupportedFrameRate:(float)a6 motionAttachmentsMode:(int)a7 motionAttachmentsSource:(int)a8 motionCallbackThreadPriority:(unsigned int)a9 provideSourceVideoWithMotionAttachmentsOutput:(BOOL)a10 provideOfflineVISMotionDataOutput:(BOOL)a11 inputFormatIsProResRaw:(BOOL)a12 errorOut:(int *)a13;
- (void)didReachEndOfDataForConfigurationID:(id)a0 input:(id)a1;
- (void)dealloc;
- (void)prepareForCurrentConfigurationToBecomeLive;

@end
