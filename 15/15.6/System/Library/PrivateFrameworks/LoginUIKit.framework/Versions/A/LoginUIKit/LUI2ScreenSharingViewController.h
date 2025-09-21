@interface LUI2ScreenSharingViewController : LUI2ViewController

@property char registered;

- (void)dealloc;
- (void)resume;
- (void)pause;
- (void)_updateContentView;
- (void)viewDidLoad;
- (void)viewWillDisappear;
- (void)_setupContentView;
- (char)_shouldSuppressObservedMessage;

@end
