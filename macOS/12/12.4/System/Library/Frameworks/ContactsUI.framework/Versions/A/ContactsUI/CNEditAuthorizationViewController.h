@class NSObject, NSViewController, NSString, NSButton, STPINRemoteViewController;
@protocol OS_os_log, CNEditAuthorizationViewControllerDelegate;

@interface CNEditAuthorizationViewController : NSViewController <CNContactCardWidget>

@property (class, readonly, nonatomic) NSObject<OS_os_log> *log;

@property (retain, nonatomic) STPINRemoteViewController *pinViewController;
@property (readonly, nonatomic) NSButton *cancelButton;
@property (readonly, nonatomic) id /* block */ authorizationHandler;
@property (nonatomic) long long authorizationResult;
@property (weak, nonatomic) id<CNEditAuthorizationViewControllerDelegate> delegate;
@property (weak, nonatomic) NSViewController *guardedViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pinControllerFutureWithAuthorizationHandler:(id /* block */)a0;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)viewWillAppear;
- (void)cancelButtonPressed:(id)a0;
- (void)setContact:(id)a0;
- (void)didAuthorize;
- (void)didNotAuthorize;
- (void)setupAuthorizationUI;
- (void)tearDownAuthorizationUI;
- (void)establishUnauthorizationState;
- (void)requestPinAuthorizationController;
- (void)buildAuthorizationUI;
- (void)establishAuthorizedState;
- (double)desiredHeight;
- (BOOL)shouldBeIncludedInKeyViewLoop;
- (void)presentEditAuthorizationUI;

@end
