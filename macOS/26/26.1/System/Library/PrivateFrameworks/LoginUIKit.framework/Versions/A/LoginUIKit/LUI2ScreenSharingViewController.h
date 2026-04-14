@interface LUI2ScreenSharingViewController : LUI2ViewController

@property BOOL registered;

- (void)viewDidLoad;
- (void)_updateContentView;
- (void)viewWillDisappear;
- (void)resume;
- (void)pause;
- (void)dealloc;
- (void)_setupContentView;
- (BOOL)_shouldSuppressObservedMessage;

@end
