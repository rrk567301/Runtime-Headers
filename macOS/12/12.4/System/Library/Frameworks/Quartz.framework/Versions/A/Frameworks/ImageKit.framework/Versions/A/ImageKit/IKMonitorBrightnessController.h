@class NSMutableDictionary;

@interface IKMonitorBrightnessController : NSObject {
    NSMutableDictionary *_previousMonitorBrightness;
}

+ (id)defaultController;

- (void)finalize;
- (void)dealloc;
- (id)init;
- (void)setBrightnessOnAllDisplays:(float)a0;
- (void)setMaximumBrightnessOnAllDisplays;
- (void)revertBrightness;

@end
