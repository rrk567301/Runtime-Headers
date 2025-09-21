@interface LPMObserver : NSObject

@property (readonly) BOOL isLowPowerModeEnabled;

+ (id)sharedLPMObserver;

- (id)init;
- (void)handlePowerStateChange:(id)a0;

@end
