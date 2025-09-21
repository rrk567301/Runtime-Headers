@class FMQueueSynchronizer, NSString, NSMutableDictionary, CBCentralManager, NSObject, FMXPCSession, FMTokenBucket, FMXPCServiceDescription, NSMutableSet;
@protocol OS_dispatch_queue, SPCBPeripheralManagementXPCProtocol;

@interface SPCBPeripheralManager : NSObject <CBPairingAgentDelegate, SPCBPeripheralManagement>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) FMQueueSynchronizer *queueSynchronizer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) FMTokenBucket *tokenBucket;
@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription;
@property (retain, nonatomic) FMXPCSession *session;
@property (retain, nonatomic) id<SPCBPeripheralManagementXPCProtocol> proxy;
@property (retain, nonatomic) NSMutableDictionary *sessionMetadata;
@property (nonatomic) BOOL enableSystemWakes;
@property (nonatomic) BOOL forceUpdateCriteria;
@property (retain, nonatomic) CBCentralManager *centralManager;
@property (retain, nonatomic) NSMutableSet *pendingPairingIdentifiers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cbQueue;
@property (copy, nonatomic) id /* block */ peripheralsUpdatedCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)remoteInterface;

- (void)invalidationHandler:(id)a0;
- (void)enableSystemWakesForUpdate:(BOOL)a0 completion:(id /* block */)a1;
- (void)successfulConnectionForPeripheral:(id)a0 leMAC:(id)a1 ltk:(id)a2 completion:(id /* block */)a3;
- (id)descriptionForVendorIdentifierList:(id)a0;
- (void)startSessionForUserIdentifier:(id)a0 bundleId:(id)a1 vendorIdentifierList:(id)a2 completion:(id /* block */)a3;
- (id)init;
- (void)stopSessionForUserIdentifier:(id)a0 bundleId:(id)a1 completion:(id /* block */)a2;
- (void)interruptionHandler:(id)a0;
- (void)timerFiredForActivity:(id)a0;
- (void)fetch;
- (double)timeIntervalToNextFireDateFromDate:(id)a0;
- (id)_enforceRateLimit;
- (void)handleDarwinNotificationNamed:(id)a0;
- (void).cxx_destruct;

@end
