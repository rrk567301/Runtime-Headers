@class LUI2TextField;

@interface LUI2SafeBootViewController : LUI2ViewController

@property (retain) LUI2TextField *safeBootTextField;

- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidLoad;
- (BOOL)_isSafeBoot;
- (id)_safeBootFont;

@end
