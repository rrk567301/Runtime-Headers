@interface LUI2ViewController : NSViewController

@property (getter=isEnabled) BOOL enabled;
@property (readonly) BOOL isVisible;
@property (readonly) long long blendingMode;

- (void)loadView;
- (id)init;

@end
