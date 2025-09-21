@class NSTimer;

@interface UIAccessibilityInformationLoader : NSObject {
    NSTimer *_coalesceTimer;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (void)_coalesceTimerFired:(id)a0;
- (void)_loadAccessibilityInformationOnMainThread:(char)a0;
- (void)_setNeedsLoadAccessibilityInformationOnMainThread;
- (void)loadAccessibilityInformation;
- (void)setNeedsLoadAccessibilityInformation;

@end
