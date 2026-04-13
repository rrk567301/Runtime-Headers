@class NSString, BWVISProcessorControllerConfiguration, NSMutableDictionary;
@protocol BWVISProcessorDelegate;

@interface BWVISSBPController : NSObject <BWVISProcessorController> {
    struct OpaqueFigSampleBufferProcessor { } *_sampleBufferProcessor;
    NSMutableDictionary *_sampleBufferProcessorOptions;
    BOOL _buffersEnqueued;
}

@property (nonatomic) BOOL longPressModeEnabled;
@property (nonatomic) BOOL flipHorizontalOrientationEnabled;
@property (retain, nonatomic) BWVISProcessorControllerConfiguration *configuration;
@property (weak, nonatomic) id<BWVISProcessorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (void).cxx_destruct;
- (int)enqueueBufferForProcessing:(struct opaqueCMSampleBuffer { } *)a0;
- (int)prepareToProcess;
- (int)finishPendingProcessing;

@end
