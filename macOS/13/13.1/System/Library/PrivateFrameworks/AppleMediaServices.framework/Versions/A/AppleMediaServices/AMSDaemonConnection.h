@class NSString, NSXPCConnection, NSMutableSet, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AMSDaemonConnection : NSObject <AMSDServiceBrokerProtocol>

@property (retain, nonatomic) NSXPCConnection *sharedConnection;
@property (readonly) NSObject<OS_dispatch_queue> *sharedConnectionAccessQueue;
@property (readonly) NSMutableSet *activePromises;
@property (readonly) NSMutableArray *interruptionHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_handleInterruption;
- (void)addInterruptionHandler:(id /* block */)a0;
- (id)cookieServiceProxy;
- (id)deviceMessengerProxyWithDelegate:(id)a0;
- (id)fraudReportServiceProxy;
- (id)purchaseServiceProxy;
- (id)pushNotificationService;
- (id)securityServiceProxyWithDelegate:(id)a0;
- (id)callService:(id)a0 then:(id /* block */)a1;
- (id)_connectionProxyForAsync:(BOOL)a0 accessBlock:(id /* block */)a1;
- (void)_checkInPromise:(id)a0;
- (void)_checkOutPromise:(id)a0;
- (void)_handleInvalidation;

@end
