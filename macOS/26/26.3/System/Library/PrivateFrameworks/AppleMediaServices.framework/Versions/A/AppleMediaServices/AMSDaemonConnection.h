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

- (id)safariDataUpdateServiceProxy;
- (id)securityServiceProxyWithDelegate:(id)a0;
- (id)accountSignOutServiceProxy;
- (id)cookieServiceProxy;
- (id)purchaseServiceProxy;
- (id)accountCachedServerDataService;
- (id)callService:(id)a0 then:(id /* block */)a1;
- (void)_errorForwardingProxyForServiceProxy:(id)a0 proxyReplyError:(id)a1 interface:(id)a2 proxyPromise:(id)a3;
- (id)cookieServiceProxySyncWithError:(id *)a0;
- (id)dismissQRDialogServiceProxy;
- (id)accountManagementServiceProxySyncWithError:(id *)a0;
- (void)attemptResumeIfRequired;
- (id)onDeviceDataServiceProxy;
- (id)init;
- (id)_connectionProxyWithAccessBlock:(id /* block */)a0;
- (id)pushNotificationService;
- (void)_initializeConnection;
- (id)deviceMessengerProxyWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)autoBugCaptureServiceProxy;
- (id)keychainServiceProxy;
- (id)paymentValidationServiceProxy;
- (id)paymentConfirmationProxy;
- (id)_serviceInterfaceForSelector:(SEL)a0;
- (void)dealloc;
- (id)fraudReportServiceProxy;
- (void)_connectionSyncProxyWithAccessBlock:(id /* block */)a0;
- (id)autoBugCaptureServiceProxySyncWithError:(id *)a0;
- (id)eligibilityServiceProxy;
- (void)_handleInvalidation;
- (id)accountManagementServiceProxy;
- (void)addInterruptionHandler:(id /* block */)a0;
- (id)accountPostSignInServiceProxy;
- (void)_handleInterruption;

@end
