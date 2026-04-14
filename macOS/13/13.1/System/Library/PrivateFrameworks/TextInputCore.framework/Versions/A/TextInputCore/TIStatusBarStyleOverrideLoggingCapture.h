@interface TIStatusBarStyleOverrideLoggingCapture : NSObject

+ (long long *)_loggingCaptureOverrideCountPtr;
+ (long long)_incrementLoggingCaptureOverride;
+ (long long)_decrementLoggingCaptureOverride;
+ (void)acquireLoggingCaptureOverride;
+ (void)releaseLoggingCaptureOverride;

- (void)dealloc;
- (id)init;

@end
