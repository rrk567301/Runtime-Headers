@class NSMutableDictionary;

@interface IKMonitorBrightnessController : NSObject {
    NSMutableDictionary *_previousMonitorBrightness;
}

+ (id)defaultController;

- (void)finalize;
- (id)init;
- (void)dealloc;
- (void)revertBrightness;
- (void)setBrightnessOnAllDisplays:(float)a0;
- (void)setMaximumBrightnessOnAllDisplays;

@end
