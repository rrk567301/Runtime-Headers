@interface TIStatusBarStyleOverrideLoggingCapture : NSObject

+ (void)releaseLoggingCaptureOverride;
+ (void)acquireLoggingCaptureOverride;
+ (long long *)_loggingCaptureOverrideCountPtr;
+ (long long)_incrementLoggingCaptureOverride;
+ (long long)_decrementLoggingCaptureOverride;

- (void)dealloc;
- (id)init;

@end
