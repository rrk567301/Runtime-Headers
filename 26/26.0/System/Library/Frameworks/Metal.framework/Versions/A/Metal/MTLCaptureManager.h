@protocol MTLCaptureScope;

@interface MTLCaptureManager : NSObject

@property (retain) id<MTLCaptureScope> defaultCaptureScope;
@property (readonly) BOOL isCapturing;

+ (id)sharedCaptureManager;

- (BOOL)startCaptureWithDescriptor:(id)a0 error:(id *)a1;
- (void)dealloc;
- (id)newCaptureScopeWithCommandQueue:(id)a0;
- (void)startCaptureWithDevice:(id)a0;
- (id)newCaptureScopeWithDevice:(id)a0;
- (BOOL)supportsDestination:(long long)a0;
- (void)startCaptureWithCommandQueue:(id)a0;
- (void)notifySubmissionForEyeSPI:(unsigned long long)a0 iosurface:(struct __IOSurface { } *)a1 bounds:(const struct MTLVRTextureBounds { float x0; float x1; float x2; float x3; } *)a2 submitFlags:(unsigned long long)a3;
- (void)startCaptureWithScope:(id)a0;
- (id)newCaptureScopeWithMTL4CommandQueue:(id)a0;
- (void)stopCapture;
- (void)notifyPostPresentHandoffSPI;

@end
