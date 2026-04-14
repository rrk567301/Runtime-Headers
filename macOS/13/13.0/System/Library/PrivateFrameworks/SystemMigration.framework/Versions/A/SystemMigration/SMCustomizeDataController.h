@class NSMutableString, SMWelcomeController, SMMigrationCustomizeViewController;

@interface SMCustomizeDataController : NSViewController

@property (retain) SMWelcomeController *parentController;
@property unsigned long long paneID;
@property (retain) SMMigrationCustomizeViewController *customizeViewController;
@property BOOL isCustomizationReady;
@property BOOL startedObserving;
@property (retain) NSMutableString *paneStory;
@property (readonly, getter=isCollectingPasswords) BOOL collectingPasswords;

- (id)description;
- (void).cxx_destruct;
- (void)startObserving;
- (void)stopObserving;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)awakeFromNib;
- (void)viewWillAppear;
- (void)viewDidAppear;
- (void)displayAlertForLosingSourceDisk:(BOOL)a0;
- (void)exitingThisPane;
- (void)pressedLeftButton;
- (id)initWithParentController:(id)a0 forSystem:(id)a1 shouldReCustomize:(BOOL)a2;
- (void)setupForSystem:(id)a0;
- (void)startObservingForIsCustomizationReady;
- (void)stopObservingForIsCustomizationReady;
- (BOOL)canProceed;

@end
