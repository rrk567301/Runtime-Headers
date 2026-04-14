@class SMMigrationProgressViewController, NSTimer, NSMutableString, SMWelcomeController;

@interface SMProgressController : NSViewController

@property (retain) SMWelcomeController *parentController;
@property unsigned long long paneID;
@property (retain) SMMigrationProgressViewController *progressViewController;
@property BOOL progressDone;
@property (retain) NSTimer *pollForHasTheMigrationEngineCompletedAllTasks;
@property BOOL stoppedObserving;
@property (retain) NSMutableString *paneStory;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)startObserving;
- (void)stopObserving;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)awakeFromNib;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (id)initWithParentController:(id)a0;
- (void)exitingThisPane;
- (void)cancelMigration;
- (void)displayAlertForLosingSourceDisk:(BOOL)a0;
- (void)displayConnectionDetailsSheet;
- (void)displayReconfirmQuitAlert;
- (void)displaySizeErrorSheet;
- (void)invalidateTimersThatPollsForHasTheMigrationEngineCompletedAllTasks;
- (void)migrationRequestCompletedState:(unsigned long long)a0 advancingTo:(unsigned long long)a1 withErrorsAndWarnings:(id)a2;
- (void)startPollingForHasTheMigrationEngineCompletedAllTasks;

@end
