@interface BWDeferredCaptureControllerRequest : BWStillImageProcessorControllerRequest

@property (nonatomic) int err;

- (char)readyForProcessing;

@end
