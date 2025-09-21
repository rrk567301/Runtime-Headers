@interface AVCaptureDeviceDynamicAspectRatioRequest : AVCaptureDeviceControlRequest

@property (readonly, copy, nonatomic) id /* block */ dynamicAspectRatioCompletionBlock;

+ (id)dynamicAspectRatioRequestWithCompletionBlock:(id /* block */)a0 requestID:(int)a1;

- (void)dealloc;
- (id)_initWithCompletionBlock:(id /* block */)a0 requestID:(int)a1;

@end
