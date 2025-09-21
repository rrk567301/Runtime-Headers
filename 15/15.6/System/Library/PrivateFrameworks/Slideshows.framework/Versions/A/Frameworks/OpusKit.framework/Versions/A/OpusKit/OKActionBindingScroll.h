@interface OKActionBindingScroll : OKActionBinding

@property (nonatomic) struct CGPoint { double x; double y; } offset;

+ (id)supportedSettings;

- (id)init;
- (id)initWithSettings:(id)a0;
- (void)loadForResponder:(id)a0 scope:(unsigned long long)a1;
- (char)respondsToAction:(id)a0 isTouchCountAgnostic:(char)a1;
- (id)settingObjectForKey:(id)a0;

@end
