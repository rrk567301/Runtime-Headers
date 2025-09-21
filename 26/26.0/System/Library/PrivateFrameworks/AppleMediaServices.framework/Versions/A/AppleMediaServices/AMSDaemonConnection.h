@class NSString, NSXPCConnection, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AMSDaemonConnection : NSObject <AMSDServiceBrokerProtocol>

@property (retain, nonatomic) NSXPCConnection *sharedConnection;
@property (readonly) NSObject<OS_dispatch_queue> *sharedConnectionAccessQueue;
@property (readonly) NSMutableArray *interruptionHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)pushNotificationService;
- (id)accountSignOutServiceProxy;
- (void)addInterruptionHandler:(id /* block */)a0;
- (id)dismissQRDialogServiceProxy;
- (void)dealloc;
- (id)accountCachedServerDataService;
- (id)accountPostSignInServiceProxy;
- (id)paymentValidationServiceProxy;
- (id)_connectionProxyWithAccessBlock:(id /* block */)a0;
- (id)accountManagementServiceProxySyncWithError:(id *)a0;
- (id)paymentConfirmationProxy;
- (id)onDeviceDataServiceProxy;
- (id)_serviceInterfaceForSelector:(SEL)a0;
- (id)init;
- (void)_initializeConnection;
- (id)purchaseServiceProxy;
- (void)_handleInvalidation;
- (id)callService:(id)a0 then:(id /* block */)a1;
- (id)accountManagementServiceProxy;
- (void)_errorForwardingProxyForServiceProxy:(id)a0 proxyReplyError:(id)a1 interface:(id)a2 proxyPromise:(id)a3;
- (id)keychainServiceProxy;
- (void)attemptResumeIfRequired;
- (id)autoBugCaptureServiceProxy;
- (id)cookieServiceProxySyncWithError:(id *)a0;
- (id)fraudReportServiceProxy;
- (void)_connectionSyncProxyWithAccessBlock:(id /* block */)a0;
- (id)deviceMessengerProxyWithDelegate:(id)a0;
- (id)securityServiceProxyWithDelegate:(id)a0;
- (void)_handleInterruption;
- (id)cookieServiceProxy;
- (void).cxx_destruct;
- (id)autoBugCaptureServiceProxySyncWithError:(id *)a0;

@end
