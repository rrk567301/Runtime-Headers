@class LUI2TextField;

@interface LUI2SafeBootViewController : LUI2ViewController

@property (retain) LUI2TextField *safeBootTextField;

- (void)viewDidLoad;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)_isSafeBoot;
- (id)_safeBootFont;

@end
