@class NSTextField, NSString, NSMutableString, NSNumber, SMWelcomeController, SMMigrationFrom_Client, NSAlert;

@interface MigrationToAnotherMacController : NSViewController

@property (retain) SMWelcomeController *parentController;
@property unsigned long long paneID;
@property (retain) SMMigrationFrom_Client *fromClient;
@property (retain) NSAlert *serverFailureAlert;
@property (retain) NSString *currentWirelessNetworkName;
@property (retain) NSMutableString *paneStory;
@property (weak) NSTextField *descriptionLabel;
@property (weak) NSTextField *passcodeField;
@property BOOL gearShouldAnimate;
@property BOOL showStatus;
@property BOOL pairAccepted;
@property (retain) NSString *selectedTabIdentifier;
@property (readonly) NSString *statusText;
@property (retain) NSNumber *passcode;
@property BOOL serving;
@property (retain) NSString *handoffPeerName;
@property (readonly) BOOL shouldShowWirelessNetworkName;
@property (readonly) NSString *currentWirelessBSSName;

+ (id)keyPathsForValuesAffectingStatusText;
+ (id)keyPathsForValuesAffectingShouldShowWirelessNetworkName;
+ (id)localizedPasscode:(id)a0;

- (void).cxx_destruct;
- (void)startObserving;
- (void)stopObserving;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)ssidDidChangeForWiFiInterfaceWithName:(id)a0;
- (id)initWithParentController:(id)a0;
- (void)exitingThisPane;
- (void)showServerAlert;
- (void)dismissServerAlert;
- (void)doBindings;
- (void)pressedAcceptPasscode:(id)a0;
- (void)pressedRejectPasscode:(id)a0;
- (void)pressedRightButton;
- (void)switchUI:(BOOL)a0;
- (void)undoBindings;
- (void)updateCurrentWiFiNetworkName;

@end
