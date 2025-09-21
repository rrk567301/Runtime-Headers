@interface LUI2ScreenSharingViewController : LUI2ViewController

@property BOOL registered;

- (void)pause;
- (void)viewWillDisappear;
- (void)viewDidLoad;
- (void)dealloc;
- (void)resume;
- (void)_updateContentView;
- (void)_setupContentView;
- (BOOL)_shouldSuppressObservedMessage;

@end
