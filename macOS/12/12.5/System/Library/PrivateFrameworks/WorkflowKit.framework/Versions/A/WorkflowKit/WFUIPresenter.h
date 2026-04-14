@class NSXPCListenerEndpoint, NSXPCConnection;
@protocol WFUIPresenterInterface, WFUIPresenterDelegate;

@interface WFUIPresenter : NSObject

@property (class, readonly, nonatomic) WFUIPresenter *defaultPresenter;

@property (readonly, nonatomic) id<WFUIPresenterInterface> localPresenter;
@property (nonatomic) BOOL connected;
@property (readonly, nonatomic) NSXPCConnection *xpcConnection;
@property (weak, nonatomic) id<WFUIPresenterDelegate> delegate;
@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint;

- (void).cxx_destruct;
- (id)initWithMachServiceName:(id)a0;
- (id)initWithConnection:(id)a0;
- (id)initWithServiceName:(id)a0;
- (id)initWithEndpoint:(id)a0;
- (void)completePersistentModeWithSuccess:(BOOL)a0 runningContext:(id)a1 completion:(id /* block */)a2;
- (void)beginPersistentModeWithRunningContext:(id)a0 attributions:(id)a1 completionHandler:(id /* block */)a2;
- (void)showDialogRequest:(id)a0 runningContext:(id)a1 completionHandler:(id /* block */)a2;
- (void)dismissPresentedContentForRunningContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)bringDialogsToFrontForRunningContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)returnFocusToOriginatingAppForRunningContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)resumeConnectionIfNecessary;
- (id)presenterWithErrorHandler:(id /* block */)a0;
- (id)initWithLocalPresenter:(id)a0;
- (BOOL)showWebPage:(id)a0 completionHandler:(id /* block */)a1;

@end
