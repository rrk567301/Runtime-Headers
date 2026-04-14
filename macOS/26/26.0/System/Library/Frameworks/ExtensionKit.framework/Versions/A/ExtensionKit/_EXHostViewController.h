@class _EXHostSessionDriver, NSViewController, NSView, _EXHostViewControllerSession, _EXExtensionProcess, _EXHostViewControllerConfiguration;
@protocol _EXHostViewControllerDelegate;

@interface _EXHostViewController : NSViewController <_EXHostViewControllerProtocol, _EXHostViewDelegateProtocol>

@property (retain) _EXHostSessionDriver *sessionDriver;
@property (retain) NSViewController *embededViewController;
@property (copy, nonatomic) _EXHostViewControllerConfiguration *innerConfiguration;
@property (weak, nonatomic) id<_EXHostViewControllerDelegate> delegate;
@property (retain, nonatomic) NSView *placeholderView;
@property (copy, nonatomic) _EXHostViewControllerConfiguration *configuration;
@property (retain, nonatomic) _EXHostViewControllerSession *session;
@property (retain, nonatomic) NSViewController<_EXHostViewControllerDelegate> *placeholderViewController;
@property (retain, nonatomic) _EXExtensionProcess *extensionProcess;
@property (readonly) NSView *view;

- (void)viewDidLoad;
- (void)loadView;
- (id)makeXPCConnectionWithError:(id *)a0;
- (void)dealloc;
- (void)setConfiguration:(id)a0;
- (id)session;
- (id)init;
- (id)configuration;
- (void)setSession:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)embedViewController:(id)a0;
- (void)embedPlaceholder;

@end
