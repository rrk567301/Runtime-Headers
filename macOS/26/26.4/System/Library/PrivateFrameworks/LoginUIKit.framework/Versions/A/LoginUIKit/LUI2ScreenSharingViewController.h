@interface LUI2ScreenSharingViewController : LUI2ViewController

@property BOOL registered;

- (void)resume;
- (void)pause;
- (void)viewDidLoad;
- (void)_updateContentView;
- (void)viewWillDisappear;
- (void)dealloc;
- (void)_setupContentView;
- (BOOL)_shouldSuppressObservedMessage;

@end
