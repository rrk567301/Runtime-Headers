@class NSXPCListenerEndpoint, NSString, NSMutableSet;
@protocol WFUIPresenterConnection, WFUIPresenterDelegate;

@interface WFUIPresenter : NSObject <WFUIPresenterHostInterface>

@property (class, readonly, nonatomic) WFUIPresenter *defaultPresenter;

@property (readonly, nonatomic) id<WFUIPresenterConnection> connection;
@property (readonly, nonatomic) id<WFUIPresenterConnection> auxiliaryConnection;
@property (readonly, nonatomic) NSMutableSet *runningContextsUsingAuxiliaryConnection;
@property (weak, nonatomic) id<WFUIPresenterDelegate> delegate;
@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (void)beginPersistentModeWithRunningContext:(id)a0 attribution:(id)a1 completionHandler:(id /* block */)a2;
- (void)completePersistentModeWithSuccess:(id)a0 runningContext:(id)a1 completionHandler:(id /* block */)a2;
- (void)showDialogRequest:(id)a0 runningContext:(id)a1 completionHandler:(id /* block */)a2;
- (void)dismissPresentedContentForRunningContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)bringDialogsToFrontForRunningContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)returnFocusToOriginatingAppForRunningContext:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithConnection:(id)a0 auxiliaryConnection:(id)a1;
- (BOOL)showWebPage:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)requestShouldUseAuxiliaryConnection:(id)a0;

@end
