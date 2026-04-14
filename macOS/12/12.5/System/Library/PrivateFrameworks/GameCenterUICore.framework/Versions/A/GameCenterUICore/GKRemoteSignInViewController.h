@class GKLocalPlayer, NSString;
@protocol GKRemoteSignInViewControllerDelegate, GKRemoteViewController;

@interface GKRemoteSignInViewController : NSViewController <GKRemoteViewControllerDelegate, GKDialogControllerSizing>

@property (retain, nonatomic) id<GKRemoteViewController> remoteViewController;
@property BOOL didRequestRemoteViewController;
@property (retain) GKLocalPlayer *localPlayer;
@property long long viewAppearCount;
@property (weak) id<GKRemoteSignInViewControllerDelegate> delegate;
@property unsigned long long signInViewControllerMode;
@property (readonly) struct CGSize { double x0; double x1; } dialogSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)view;
- (void)loadView;
- (void)applicationWillTerminate:(id)a0;
- (void)viewWillAppear;
- (void)viewDidDisappear;
- (void)requestRemoteViewController;
- (struct CGSize { double x0; double x1; })_gkSizeForDialogController;
- (void)remoteViewController:(id)a0 receivedMessageFromService:(id)a1;
- (BOOL)remoteViewControllerRequestingDismiss:(id)a0;
- (BOOL)_gkMatchParentContentSize;
- (unsigned long long)_gkDimmingMethod;
- (id)initWithLocalPlayer:(id)a0;

@end
