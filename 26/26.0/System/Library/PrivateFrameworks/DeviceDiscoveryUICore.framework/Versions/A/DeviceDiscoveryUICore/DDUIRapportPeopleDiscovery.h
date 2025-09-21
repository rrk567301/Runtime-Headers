@class NSMutableDictionary, NSArray, RPRemoteDisplayDevice, RPRemoteDisplayDiscovery;

@interface DDUIRapportPeopleDiscovery : NSObject

@property (retain, nonatomic) RPRemoteDisplayDiscovery *discovery;
@property (retain, nonatomic) NSMutableDictionary *discoveredDevicesMap;
@property (retain, nonatomic) NSArray *previousAvailablePeople;
@property (copy, nonatomic) id /* block */ availablePeopleChangedHandler;
@property (copy, nonatomic) id /* block */ discoverySessionChangedHandler;
@property (readonly, nonatomic) unsigned char discoverySessionState;
@property (readonly, nonatomic) unsigned char discoverySessionStartReason;
@property (copy, nonatomic) id /* block */ personDeclinedHandler;
@property (retain, nonatomic) RPRemoteDisplayDevice *dedicatedDevice;
@property (copy, nonatomic) id /* block */ dedicatedDeviceChangedHandler;

- (void)invalidate;
- (void).cxx_destruct;
- (id)availablePeople;
- (void)activateDiscoveryWithCompletion:(id /* block */)a0;
- (void)attemptDedicatedDeviceConnection;
- (void)cancelPerson:(id)a0;
- (id)getDiscoveredDevicesMap;
- (id)initWithRemoteDisplayDiscovery:(id)a0 deviceSelectedHandler:(id /* block */)a1;
- (void)selectPerson:(id)a0 forPairingType:(unsigned int)a1;

@end
