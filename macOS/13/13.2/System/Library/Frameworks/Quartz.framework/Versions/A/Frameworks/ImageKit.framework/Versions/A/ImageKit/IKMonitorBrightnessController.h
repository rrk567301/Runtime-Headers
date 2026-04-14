@class NSMutableDictionary;

@interface IKMonitorBrightnessController : NSObject {
    NSMutableDictionary *_previousMonitorBrightness;
}

+ (id)defaultController;

- (void)dealloc;
- (id)init;
- (void)finalize;
- (void)setMaximumBrightnessOnAllDisplays;
- (void)setBrightnessOnAllDisplays:(float)a0;
- (void)revertBrightness;

@end
