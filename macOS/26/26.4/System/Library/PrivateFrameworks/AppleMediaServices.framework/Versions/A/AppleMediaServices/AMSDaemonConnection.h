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

- (id)accountPostSignInServiceProxy;
- (id)keychainServiceProxy;
- (void)addInterruptionHandler:(id /* block */)a0;
- (id)onDeviceDataServiceProxy;
- (id)pushNotificationService;
- (id)paymentConfirmationProxy;
- (id)cookieServiceProxySyncWithError:(id *)a0;
- (id)autoBugCaptureServiceProxy;
- (id)purchaseServiceProxy;
- (id)accountManagementServiceProxy;
- (void)_errorForwardingProxyForServiceProxy:(id)a0 proxyReplyError:(id)a1 interface:(id)a2 proxyPromise:(id)a3;
- (void)_handleInvalidation;
- (id)accountManagementServiceProxySyncWithError:(id *)a0;
- (id)accountCachedServerDataService;
- (id)_connectionProxyWithAccessBlock:(id /* block */)a0;
- (id)eligibilityServiceProxy;
- (void)attemptResumeIfRequired;
- (id)accountSignOutServiceProxy;
- (id)fraudReportServiceProxy;
- (void).cxx_destruct;
- (id)callService:(id)a0 then:(id /* block */)a1;
- (id)securityServiceProxyWithDelegate:(id)a0;
- (id)safariDataUpdateServiceProxy;
- (id)autoBugCaptureServiceProxySyncWithError:(id *)a0;
- (id)init;
- (void)_handleInterruption;
- (void)_initializeConnection;
- (id)paymentValidationServiceProxy;
- (id)cookieServiceProxy;
- (id)_serviceInterfaceForSelector:(SEL)a0;
- (id)dismissQRDialogServiceProxy;
- (id)deviceMessengerProxyWithDelegate:(id)a0;
- (void)dealloc;
- (void)_connectionSyncProxyWithAccessBlock:(id /* block */)a0;

@end
