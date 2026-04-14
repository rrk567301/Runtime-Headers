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
- (id)exportedInterface;
- (id)exportedObject;
- (void)dismiss;
- (id)serviceViewControllerInterface;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)viewDidLoad;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)_setupRemoteView;
- (struct CGSize { double x0; double x1; })_gkSizeForDialogController;
- (void)configureRemoteViewForParentView:(id)a0;
- (void)sendMessageToService:(id)a0;
- (void)_setupRemoteViewOnMainThread;
- (id)exportedObjectProxy;
- (id)gkServiceViewControllerProxy;
- (void)messageFromService:(id)a0;
- (void)presentWithWindow:(id)a0;
- (void)serviceRequestsDismiss;

@end
