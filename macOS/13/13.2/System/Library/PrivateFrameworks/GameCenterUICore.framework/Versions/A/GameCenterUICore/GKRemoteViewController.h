@class NSWindow, NSString, NSDictionary, GKRemoteViewControllerProxy;

@interface GKRemoteViewController : NSRemoteViewController <GKRemoteViewController, GKRemoteViewControllerHostProtocol, NSRemoteViewDelegate, GKViewController>

@property unsigned long long mode;
@property (retain) NSDictionary *modeSpecificInitialState;
@property (weak) id delegate;
@property (retain, nonatomic) GKRemoteViewControllerProxy *proxy;
@property (weak) NSWindow *parentWindow;
@property (retain) NSWindow *panelWindow;
@property (nonatomic) struct _NSModalSession { } *modalSession;
@property BOOL shouldSizeToParent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) BOOL shouldRetainExportedObject;

- (id)init;
- (void).cxx_destruct;
- (id)exportedObject;
- (id)exportedInterface;
- (void)viewDidLoad;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)dismiss;
- (id)serviceViewControllerInterface;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)_setupRemoteView;
- (void)sendMessageToService:(id)a0;
- (void)configureRemoteViewForParentView:(id)a0;
- (struct CGSize { double x0; double x1; })_gkSizeForDialogController;
- (void)presentWithWindow:(id)a0;
- (void)serviceRequestsDismiss;
- (void)messageFromService:(id)a0;
- (void)_setupRemoteViewOnMainThread;
- (id)exportedObjectProxy;
- (id)gkServiceViewControllerProxy;

@end
