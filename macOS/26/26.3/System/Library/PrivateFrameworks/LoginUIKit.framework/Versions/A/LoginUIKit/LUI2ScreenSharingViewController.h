@interface LUI2ScreenSharingViewController : LUI2ViewController

@property BOOL registered;

- (void)pause;
- (void)resume;
- (void)_updateContentView;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear;
- (void)_setupContentView;
- (BOOL)_shouldSuppressObservedMessage;

@end
