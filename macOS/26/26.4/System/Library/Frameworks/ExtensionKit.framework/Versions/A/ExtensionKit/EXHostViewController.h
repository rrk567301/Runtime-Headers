@class _EXHostSessionDriver, NSViewController, _EXHostViewControllerSession, NSView, _EXHostViewControllerConfiguration;
@protocol EXHostViewControllerDelegate;

@interface EXHostViewController : NSViewController <_EXHostViewControllerProtocol, _EXHostViewDelegateProtocol>

@property (retain) _EXHostSessionDriver *sessionDriver;
@property (retain) NSViewController *embededViewController;
@property (copy, nonatomic) _EXHostViewControllerConfiguration *configuration;
@property (retain, nonatomic) _EXHostViewControllerSession *session;
@property (weak, nonatomic) id<EXHostViewControllerDelegate> delegate;
@property (retain, nonatomic) NSView *placeholderView;
@property (readonly) NSView *view;

- (void)loadView;
- (id)initWithConfiguration:(id)a0;
- (void)viewDidLoad;
- (void)setConfiguration:(id)a0;
- (void)setSession:(id)a0;
- (id)configuration;
- (void).cxx_destruct;
- (id)init;
- (id)session;
- (void)dealloc;
- (id)makeXPCConnectionWithError:(id *)a0;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)embedViewController:(id)a0;
- (void)embedPlaceholder;
- (id)extensionProcess;

@end
