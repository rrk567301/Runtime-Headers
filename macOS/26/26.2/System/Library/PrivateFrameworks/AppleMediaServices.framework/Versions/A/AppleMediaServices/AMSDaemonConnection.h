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

- (void)_handleInterruption;
- (id)keychainServiceProxy;
- (id)onDeviceDataServiceProxy;
- (id)fraudReportServiceProxy;
- (id)deviceMessengerProxyWithDelegate:(id)a0;
- (id)securityServiceProxyWithDelegate:(id)a0;
- (void)addInterruptionHandler:(id /* block */)a0;
- (id)dismissQRDialogServiceProxy;
- (id)accountCachedServerDataService;
- (id)_serviceInterfaceForSelector:(SEL)a0;
- (id)autoBugCaptureServiceProxySyncWithError:(id *)a0;
- (id)callService:(id)a0 then:(id /* block */)a1;
- (void)_initializeConnection;
- (id)pushNotificationService;
- (id)_connectionProxyWithAccessBlock:(id /* block */)a0;
- (id)eligibilityServiceProxy;
- (void)_errorForwardingProxyForServiceProxy:(id)a0 proxyReplyError:(id)a1 interface:(id)a2 proxyPromise:(id)a3;
- (id)cookieServiceProxy;
- (id)cookieServiceProxySyncWithError:(id *)a0;
- (id)accountPostSignInServiceProxy;
- (id)accountSignOutServiceProxy;
- (id)paymentConfirmationProxy;
- (void).cxx_destruct;
- (id)autoBugCaptureServiceProxy;
- (void)_connectionSyncProxyWithAccessBlock:(id /* block */)a0;
- (id)accountManagementServiceProxy;
- (void)attemptResumeIfRequired;
- (id)accountManagementServiceProxySyncWithError:(id *)a0;
- (id)init;
- (id)paymentValidationServiceProxy;
- (id)safariDataUpdateServiceProxy;
- (void)_handleInvalidation;
- (void)dealloc;
- (id)purchaseServiceProxy;

@end
