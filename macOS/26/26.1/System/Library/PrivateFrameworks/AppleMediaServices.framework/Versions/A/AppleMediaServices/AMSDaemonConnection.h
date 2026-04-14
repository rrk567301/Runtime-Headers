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

- (id)cookieServiceProxy;
- (id)_serviceInterfaceForSelector:(SEL)a0;
- (id)accountManagementServiceProxy;
- (id)accountSignOutServiceProxy;
- (void)_handleInvalidation;
- (id)securityServiceProxyWithDelegate:(id)a0;
- (id)autoBugCaptureServiceProxySyncWithError:(id *)a0;
- (id)pushNotificationService;
- (void)_connectionSyncProxyWithAccessBlock:(id /* block */)a0;
- (id)accountManagementServiceProxySyncWithError:(id *)a0;
- (void)_initializeConnection;
- (id)deviceMessengerProxyWithDelegate:(id)a0;
- (id)purchaseServiceProxy;
- (id)autoBugCaptureServiceProxy;
- (id)callService:(id)a0 then:(id /* block */)a1;
- (void)addInterruptionHandler:(id /* block */)a0;
- (void)dealloc;
- (id)accountCachedServerDataService;
- (id)fraudReportServiceProxy;
- (void)_handleInterruption;
- (void)attemptResumeIfRequired;
- (id)cookieServiceProxySyncWithError:(id *)a0;
- (void).cxx_destruct;
- (id)dismissQRDialogServiceProxy;
- (id)keychainServiceProxy;
- (void)_errorForwardingProxyForServiceProxy:(id)a0 proxyReplyError:(id)a1 interface:(id)a2 proxyPromise:(id)a3;
- (id)paymentConfirmationProxy;
- (id)accountPostSignInServiceProxy;
- (id)paymentValidationServiceProxy;
- (id)_connectionProxyWithAccessBlock:(id /* block */)a0;
- (id)init;
- (id)onDeviceDataServiceProxy;

@end
