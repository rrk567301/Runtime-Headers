@interface PLMetricdLifecycleManager : NSObject

@property BOOL isActive;

+ (id)sharedManager;

- (id)init;
- (void)signalActive;
- (void)signalInactive;
- (void)stopMetricd;

@end
