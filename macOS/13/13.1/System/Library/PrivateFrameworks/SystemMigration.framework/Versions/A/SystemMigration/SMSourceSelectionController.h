@class SMSystem_Client, NSMutableString, SMWelcomeController, SMSelectSourceViewController;

@interface SMSourceSelectionController : NSViewController <SMSelectSourceDelegate>

@property (retain) SMWelcomeController *parentController;
@property unsigned long long paneID;
@property (retain) SMSelectSourceViewController *selectSourceViewController;
@property (retain) SMSystem_Client *finalSystemSelected;
@property BOOL startedObserving;
@property (retain) NSMutableString *paneStory;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)startObserving;
- (void)stopObserving;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)awakeFromNib;
- (void)viewWillAppear;
- (void)viewDidAppear;
- (void)daemonConnectionLost;
- (id)initWithParentController:(id)a0;
- (void)exitingThisPane;
- (void)userMadeFinalMigrationSourceSelection:(id)a0;
- (void)pressedRightButton;
- (BOOL)pressedLeftButton;

@end
