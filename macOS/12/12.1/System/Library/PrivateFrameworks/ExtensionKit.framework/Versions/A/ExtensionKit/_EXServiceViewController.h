@class EXExtensionUISession, NSWindow, NSViewController;

@interface _EXServiceViewController : NSServiceViewController

@property (retain) NSWindow *window;
@property (retain) NSViewController *contentViewController;
@property (weak) EXExtensionUISession *session;

- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)embedViewController:(id)a0;
- (id)hostParameters;

@end
