@class NSString;

@interface OKActionBindingCustom : OKActionBinding

@property (copy, nonatomic) NSString *name;

+ (id)supportedSettings;

- (void)dealloc;
- (id)init;
- (void)unload;
- (id)initWithSettings:(id)a0;
- (void)loadForResponder:(id)a0 scope:(unsigned long long)a1;
- (char)ownsGestureRecognizer:(id)a0;
- (char)respondsToAction:(id)a0 isTouchCountAgnostic:(char)a1;
- (id)settingObjectForKey:(id)a0;

@end
