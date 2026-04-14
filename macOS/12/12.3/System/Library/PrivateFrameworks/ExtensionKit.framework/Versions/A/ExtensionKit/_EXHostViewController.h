@class NSViewController, NSString, _EXHostSession, _EXHostViewControllerConfiguration;
@protocol _EXHostViewControllerDelegate;

@interface _EXHostViewController : NSViewController <_EXHostSessionDelegate, _EXConnectionCreating>

@property (retain) _EXHostSession *session;
@property (retain) NSViewController *embededViewController;
@property (weak, nonatomic) id<_EXHostViewControllerDelegate> delegate;
@property (copy, nonatomic) _EXHostViewControllerConfiguration *configuration;
@property (retain, nonatomic) NSViewController<_EXHostViewControllerDelegate> *placeholderViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)setConfiguration:(id)a0;
- (void)hostSessionDidPrepareForHosting:(id)a0;
- (void)hostSessionViewControllerReady:(id)a0;
- (void)hostSessionDidInvalidate:(id)a0;
- (id)makeXPCConnectionWithError:(id *)a0;
- (void)embedViewController:(id)a0;

@end
