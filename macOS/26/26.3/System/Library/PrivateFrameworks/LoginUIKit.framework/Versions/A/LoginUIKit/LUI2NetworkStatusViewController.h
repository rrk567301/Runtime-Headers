@class NSButton;

@interface LUI2NetworkStatusViewController : LUI2ViewController

@property (retain) NSButton *networkStatusButton;
@property int networkStatusInternal;
@property id target;
@property SEL action;
@property int networkStatus;

- (void)setNetworkStatus:(int)a0;
- (int)networkStatus;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidLoad;
- (void)_buttonPressed:(id)a0;

@end
