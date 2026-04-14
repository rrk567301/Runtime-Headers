@interface OKActionBindingSwipe : OKActionBinding

@property (nonatomic) unsigned long long numberOfTouchesRequired;
@property (nonatomic) unsigned long long direction;

+ (id)supportedSettings;

- (void)unload;
- (void)dealloc;
- (id)initWithSettings:(id)a0;
- (id)init;
- (id)settingObjectForKey:(id)a0;
- (void)loadForResponder:(id)a0 scope:(unsigned long long)a1;
- (BOOL)ownsGestureRecognizer:(id)a0;
- (BOOL)respondsToAction:(id)a0 isTouchCountAgnostic:(BOOL)a1;

@end
