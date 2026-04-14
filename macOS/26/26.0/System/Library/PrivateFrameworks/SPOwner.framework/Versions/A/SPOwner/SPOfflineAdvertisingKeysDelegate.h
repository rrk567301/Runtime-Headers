@class NSString, SPLocalBeaconManager, FMXPCSession, FMXPCServiceDescription, NSObject, CBPeripheralManager;
@protocol OS_dispatch_queue;

@interface SPOfflineAdvertisingKeysDelegate : NSObject <CBPeripheralManagerPrivateDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) SPLocalBeaconManager *beaconManager;
@property (retain, nonatomic) CBPeripheralManager *peripheralManager;
@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription;
@property (retain, nonatomic) FMXPCSession *session;
@property (retain, nonatomic) FMXPCServiceDescription *userAgentServiceDescription;
@property (retain, nonatomic) FMXPCSession *userAgentSession;
@property (nonatomic) BOOL inLowPowerMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)proxy;
- (id)userAgentProxy;
- (id)userAgentSyncProxy;
- (id)initWithBeaconManager:(id)a0;
- (void)enterLowPowerMode;
- (id)remoteInterface;
- (void)peripheralManager:(id)a0 offlineAdvPayloadRequestedWithReason:(long long)a1;
- (id)syncProxy;
- (void)processKeyResponse:(id)a0;
- (void)peripheralManagerDidUpdateState:(id)a0;
- (void).cxx_destruct;
- (long long)transformReason:(long long)a0;

@end
