@class FMXPCServiceDescription, NSString, FMXPCSession, SPBeaconManager, NSObject, CBPeripheralManager;
@protocol OS_dispatch_queue;

@interface SPOfflineAdvertisingKeysDelegate : NSObject <CBPeripheralManagerPrivateDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) SPBeaconManager *beaconManager;
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

- (void).cxx_destruct;
- (id)proxy;
- (void)peripheralManagerDidUpdateState:(id)a0;
- (id)remoteInterface;
- (void)peripheralManager:(id)a0 offlineAdvPayloadRequestedWithReason:(long long)a1;
- (id)userAgentProxy;
- (id)initWithBeaconManager:(id)a0;
- (id)userAgentSyncProxy;
- (void)enterLowPowerMode;
- (long long)transformReason:(long long)a0;
- (void)processKeyResponse:(id)a0;
- (id)syncProxy;

@end
