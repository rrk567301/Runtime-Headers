@interface OKActionBindingScroll : OKActionBinding

@property (nonatomic) struct CGPoint { double x; double y; } offset;

+ (id)supportedSettings;

- (id)settingObjectForKey:(id)a0;
- (id)initWithSettings:(id)a0;
- (id)init;
- (void)loadForResponder:(id)a0 scope:(unsigned long long)a1;
- (BOOL)respondsToAction:(id)a0 isTouchCountAgnostic:(BOOL)a1;

@end
