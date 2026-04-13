@class NSString, BWVISProcessorControllerConfiguration;
@protocol BWVISProcessorDelegate, VISProcessor, VISConfiguration;

@interface BWVISIBPController : NSObject <VISProcessorDelegate, BWVISProcessorController> {
    id<VISProcessor> _visProcessor;
    id<VISConfiguration> _visConfiguration;
    BOOL _buffersEnqueued;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL longPressModeEnabled;
@property (nonatomic) BOOL flipHorizontalOrientationEnabled;
@property (retain, nonatomic) BWVISProcessorControllerConfiguration *configuration;
@property (weak, nonatomic) id<BWVISProcessorDelegate> delegate;

+ (void)initialize;

- (void)dealloc;
- (void).cxx_destruct;
- (int)enqueueBufferForProcessing:(struct opaqueCMSampleBuffer { } *)a0;
- (void)didCompleteProcessingOfBuffer:(struct opaqueCMSampleBuffer { } *)a0 withStatus:(int)a1;
- (int)prepareToProcess;
- (int)finishPendingProcessing;

@end
