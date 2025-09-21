@interface OKActionBindingLongPress : OKActionBinding

@property (nonatomic) unsigned long long numberOfTapsRequired;
@property (nonatomic) unsigned long long numberOfTouchesRequired;
@property (nonatomic) double minimumPressDuration;
@property (nonatomic) double allowableMovement;

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
