@class STMediaStatusDomain;

@interface LUI2MicrophoneViewController : LUI2ViewController

@property BOOL registered;
@property (retain) STMediaStatusDomain *mediaDomain;

- (void)dealloc;
- (void)resume;
- (void)pause;
- (void)viewDidLoad;
- (BOOL)_isAppleInternal;
- (BOOL)_hasEntitlement;
- (void)_setupContentView;

@end
