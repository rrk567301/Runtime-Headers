@class NSString, BWVISProcessorControllerConfiguration;
@protocol BWVISProcessorDelegate, VISProcessor, VISConfiguration;

@interface BWVISProcessorController : NSObject <VISProcessorDelegate> {
    id<VISProcessor> _visProcessor;
    id<VISConfiguration> _visConfiguration;
    char _buffersEnqueued;
}

@property (nonatomic) char longPressModeEnabled;
@property (nonatomic) char flipHorizontalOrientationEnabled;
@property (nonatomic) char smartStyleReversibilityProcessingEnabled;
@property (retain, nonatomic) BWVISProcessorControllerConfiguration *configuration;
@property (weak, nonatomic) id<BWVISProcessorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (void).cxx_destruct;
- (void)didCompleteProcessingOfBuffer:(struct opaqueCMSampleBuffer { } *)a0 withStatus:(int)a1;
- (int)enqueueBufferForProcessing:(struct opaqueCMSampleBuffer { } *)a0;
- (void)willStartProcessingBuffer:(struct opaqueCMSampleBuffer { } *)a0 withStatus:(int)a1;
- (int)finishPendingProcessing;
- (int)prepareToProcess;

@end
