@class NSWindow, NSViewController;

@interface _EXExtensionRootViewController : NSServiceViewController

@property (retain) NSWindow *window;
@property (retain, nonatomic) NSViewController *contentViewController;

- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)embedViewController:(id)a0;

@end
