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
- (long long)transformReason:(long long)a0;
- (void)peripheralManagerDidUpdateState:(id)a0;
- (id)userAgentProxy;
- (void)enterLowPowerMode;
- (void).cxx_destruct;
- (void)processKeyResponse:(id)a0;
- (id)initWithBeaconManager:(id)a0;
- (id)userAgentSyncProxy;
- (id)syncProxy;
- (id)remoteInterface;
- (void)peripheralManager:(id)a0 offlineAdvPayloadRequestedWithReason:(long long)a1;

@end
