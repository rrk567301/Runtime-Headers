@interface OKActionBindingTransition : OKActionBinding

+ (id)supportedSettings;

- (void)unload;
- (id)initWithSettings:(id)a0;
- (id)init;
- (id)settingObjectForKey:(id)a0;
- (id)_compatibleNavigatorViewController:(id)a0;
- (void)loadForResponder:(id)a0 scope:(unsigned long long)a1;
- (BOOL)respondsToAction:(id)a0 isTouchCountAgnostic:(BOOL)a1;

@end
