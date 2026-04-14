@class NSString, BWDeferredCaptureContainer;

@interface BWDeferredCaptureController : BWStillImageProcessorController <BWDeferredCaptureControllerInputUpdatesDelegate> {
    BWDeferredCaptureContainer *_captureContainer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)usesCustomProcessingFlow;

- (void)reset;
- (int)process;
- (id)initWithConfiguration:(id)a0;
- (int)prepare;
- (void)cancelProcessing;
- (void)inputReceivedIntermediate:(id)a0;
- (void)input:(id)a0 encounteredProcessingError:(int)a1;
- (id)requestForInput:(id)a0 delegate:(id)a1 errOut:(int *)a2;
- (void)_addInferencesToInput:(id)a0 request:(id)a1;

@end
