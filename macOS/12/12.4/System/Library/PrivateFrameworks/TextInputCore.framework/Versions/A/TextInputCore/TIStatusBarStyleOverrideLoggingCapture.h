@interface TIStatusBarStyleOverrideLoggingCapture : NSObject

+ (void)acquireLoggingCaptureOverride;
+ (void)releaseLoggingCaptureOverride;
+ (long long *)_loggingCaptureOverrideCountPtr;
+ (long long)_incrementLoggingCaptureOverride;
+ (long long)_decrementLoggingCaptureOverride;

- (void)dealloc;
- (id)init;

@end
