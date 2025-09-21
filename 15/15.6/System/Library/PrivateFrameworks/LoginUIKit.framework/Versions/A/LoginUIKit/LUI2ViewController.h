@interface LUI2ViewController : NSViewController

@property (getter=isEnabled) char enabled;
@property (readonly) char isVisible;
@property (readonly) long long blendingMode;

- (id)init;
- (void)loadView;

@end
