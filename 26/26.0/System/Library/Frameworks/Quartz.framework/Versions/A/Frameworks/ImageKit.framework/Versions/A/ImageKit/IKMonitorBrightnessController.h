@class NSMutableDictionary;

@interface IKMonitorBrightnessController : NSObject {
    NSMutableDictionary *_previousMonitorBrightness;
}

+ (id)defaultController;

- (void)finalize;
- (void)dealloc;
- (id)init;
- (void)revertBrightness;
- (void)setBrightnessOnAllDisplays:(float)a0;
- (void)setMaximumBrightnessOnAllDisplays;

@end
