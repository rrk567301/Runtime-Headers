@class NSDictionary, BWInferenceScheduler;
@protocol MTLCommandQueue;

@interface BWStillImageProcessorControllerConfiguration : NSObject {
    char _postponeProcessorSetup;
}

@property (nonatomic) int stillImageProcessingMode;
@property (retain, nonatomic) NSDictionary *sensorConfigurationsByPortType;
@property (nonatomic) char deferredCaptureSupportEnabled;
@property (nonatomic) char deferredPhotoProcessorEnabled;
@property (retain, nonatomic) id<MTLCommandQueue> metalCommandQueue;
@property (retain, nonatomic) BWInferenceScheduler *inferenceScheduler;
@property (nonatomic) unsigned int figThreadPriority;
@property (readonly, nonatomic) char postponedProcessorSetupSupported;
@property (nonatomic) char postponeProcessorSetup;

- (void)dealloc;

@end
