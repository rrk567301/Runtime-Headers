@class NSWindow, NSString, NSDictionary, GKRemoteViewControllerProxy;
@protocol NSObject;

@interface GKRemoteViewController : NSRemoteViewController <GKRemoteViewController, GKRemoteViewControllerHostProtocol, NSRemoteViewDelegate, GKViewController>

@property unsigned long long mode;
@property (retain) NSDictionary *modeSpecificInitialState;
@property (weak) id delegate;
@property (retain, nonatomic) GKRemoteViewControllerProxy *proxy;
@property (weak) NSWindow *parentWindow;
@property (retain) NSWindow *panelWindow;
@property (nonatomic) struct _NSModalSession { } *modalSession;
@property (retain) id<NSObject> parentWindowResizeObservationToken;
@property (retain) id<NSObject> parentWindowWillCloseObservationToken;
@property BOOL shouldSizeToParent;
@property unsigned long long remotePresentation;
@property struct CGSize { double width; double height; } preferredSheetSize;
@property BOOL allowApplicationTerminationWhenModal;
@property BOOL disableParentSheetDimming;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) BOOL shouldRetainExportedObject;

- (id)exportedInterface;
- (id)exportedObject;
- (void)viewDidLoad;
- (void)viewDidAppear;
- (id)init;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (id)serviceViewControllerInterface;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (struct CGSize { double x0; double x1; })_gkSizeForDialogController;
- (void)configureRemoteViewForParentView:(id)a0;
- (void)sendMessageToService:(id)a0;
- (void)_setupRemoteView;
- (void)_setupRemoteViewOnMainThread;
- (id)exportedObjectProxy;
- (id)gkServiceViewControllerProxy;
- (void)messageFromService:(id)a0;
- (void)presentWithWindow:(id)a0;
- (void)serviceRequestsDismiss;
- (BOOL)shouldPresentAsSheet;

@end
