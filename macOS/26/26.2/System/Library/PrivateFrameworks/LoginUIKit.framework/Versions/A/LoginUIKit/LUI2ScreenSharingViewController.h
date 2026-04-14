@interface LUI2ScreenSharingViewController : LUI2ViewController

@property BOOL registered;

- (void)pause;
- (void)viewWillDisappear;
- (void)resume;
- (void)_updateContentView;
- (void)viewDidLoad;
- (void)dealloc;
- (void)_setupContentView;
- (BOOL)_shouldSuppressObservedMessage;

@end
