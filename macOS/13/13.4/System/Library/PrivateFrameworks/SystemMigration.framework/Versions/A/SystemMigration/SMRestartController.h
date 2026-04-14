@class NSString, NSTimer, NSMutableString, SMWelcomeController;

@interface SMRestartController : NSViewController

@property (retain) SMWelcomeController *parentController;
@property unsigned long long paneID;
@property (retain) NSString *countdownText;
@property (retain) NSString *postRestartText;
@property (retain) NSTimer *restartTimer;
@property (retain) NSMutableString *paneStory;
@property unsigned long long remainingSeconds;

- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (id)initWithParentController:(id)a0;
- (void)restartConfirmationTimerDidFire:(id)a0;
- (void)restartNow:(id)a0;

@end
