@class NSXPCListener, NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, WFDialogAlertPresenterDelegate, WFWorkflowStatusPresenterDelegate;

@interface WFWorkflowStatusPresenter : NSObject <NSXPCListenerDelegate, WFDialogAlertPresenter>

@property (nonatomic, getter=isLaunching) char launching;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) NSXPCConnection *activeConnection;
@property (weak, nonatomic) id<WFDialogAlertPresenterDelegate> delegate;
@property (weak, nonatomic) id<WFWorkflowStatusPresenterDelegate> statusPresenterDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) char alertIsActive;

- (id)init;
- (void).cxx_destruct;
- (char)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)deactivateAlert;
- (void)activateAlertInMainSceneOfApplicationWithBundleIdentifier:(id)a0;
- (char)alertIsLaunching;

@end
