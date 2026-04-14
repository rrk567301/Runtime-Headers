@class NSButton;

@interface LUI2NetworkStatusViewController : LUI2ViewController

@property (retain) NSButton *networkStatusButton;
@property int networkStatusInternal;
@property id target;
@property SEL action;
@property int networkStatus;

- (void)setNetworkStatus:(int)a0;
- (void).cxx_destruct;
- (int)networkStatus;
- (void)viewDidLoad;
- (void)dealloc;
- (void)_buttonPressed:(id)a0;

@end
