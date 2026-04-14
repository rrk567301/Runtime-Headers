@interface OKTransitionAlignedFlip : OKTransitionCATransition {
    unsigned long long _direction;
}

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)a0;

- (id)init;
- (id)initWithSettings:(id)a0;
- (void)setSettingDirection:(unsigned long long)a0;
- (void)prepareInView:(id)a0;
- (unsigned long long)settingDirection;
- (BOOL)needsToClip;

@end
