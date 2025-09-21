@class LUI2TextFieldBackgroundView, LUI2TextField;

@interface LUI2TextFieldViewController : LUI2ViewController

@property (retain) LUI2TextFieldBackgroundView *backgroundView;
@property (readonly) LUI2TextField *textField;
@property long long blendingMode;

- (void)viewDidLoad;
- (void)dealloc;
- (void)setEnabled:(BOOL)a0;
- (void).cxx_destruct;

@end
