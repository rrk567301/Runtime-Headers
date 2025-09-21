@class LUI2TextFieldViewController, NSObject;
@protocol OS_dispatch_queue;

@interface LUI2UserNameViewController : LUI2ViewController

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue;
@property (readonly) LUI2TextFieldViewController *textFieldViewController;

- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (void)setEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (void)_backgroundPressed:(id)a0;
- (void)_updateBlendingMode:(id)a0;
- (void)increaseContrast:(BOOL)a0;
- (void)updateTextLegibilityIfNeededWithImage:(id)a0 displayID:(unsigned int)a1 withCompletionHandler:(id /* block */)a2;

@end
