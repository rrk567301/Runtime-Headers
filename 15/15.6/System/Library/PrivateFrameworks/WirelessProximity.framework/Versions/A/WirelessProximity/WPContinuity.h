@class NSMutableDictionary;
@protocol WPContinuityDelegate;

@interface WPContinuity : WPClient

@property (weak, nonatomic) id<WPContinuityDelegate> delegate;
@property long long btBandwidthState;
@property (retain) NSMutableDictionary *transfers;
@property long long connectionUseCase;
@property long long maxAllowedConnectionDelayMs;

+ (unsigned char)clientTypeFromContinuityType:(long long)a0;
+ (long long)continuityTypeFromClientType:(unsigned char)a0;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)stateDidChange:(long long)a0;
- (void)connectToPeer:(id)a0;
- (void)disconnectFromPeer:(id)a0;
- (void)startScanningForType:(long long)a0 withData:(id)a1 mask:(id)a2 peers:(id)a3;
- (void)startScanningForType:(long long)a0 withData:(id)a1 mask:(id)a2 peers:(id)a3 boostedScan:(char)a4 duplicates:(char)a5;
- (void)startTrackingPeer:(id)a0 forType:(long long)a1;
- (void)stopAdvertisingOfType:(long long)a0;
- (void)stopScanningForType:(long long)a0;
- (void)stopTrackingPeer:(id)a0 forType:(long long)a1;
- (void)sendData:(id)a0 toPeer:(id)a1;
- (void)startAdvertisingOfType:(long long)a0 withData:(id)a1;
- (void)advertisingFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (void)advertisingPendingOfType:(unsigned char)a0;
- (void)advertisingStartedOfType:(unsigned char)a0;
- (void)advertisingStoppedOfType:(unsigned char)a0 withError:(id)a1;
- (void)bandwidthStateUpdated:(id)a0;
- (void)central:(id)a0 subscribed:(char)a1 toCharacteristic:(id)a2 inService:(id)a3;
- (id)clientAsString;
- (void)connectedDevice:(id)a0 withError:(id)a1 shouldDiscover:(char)a2;
- (void)connectedDeviceOverLEPipe:(id)a0;
- (void)deviceDiscovered:(id)a0;
- (void)disconnectedDevice:(id)a0 withError:(id)a1;
- (void)disconnectedDeviceOverLEPipe:(id)a0 withError:(id)a1;
- (void)discoveredCharacteristicsAndServices:(id)a0 forPeripheral:(id)a1;
- (void)failedToStartTrackingPeer:(id)a0 error:(id)a1;
- (void)foundPeer:(id)a0 ofType:(unsigned char)a1;
- (void)lostPeer:(id)a0 ofType:(unsigned char)a1;
- (void)peerTrackingAvailable;
- (void)peerTrackingFull;
- (void)populateClientGATT:(id /* block */)a0;
- (void)receivedData:(id)a0 forCharacteristic:(id)a1 inService:(id)a2 forPeripheral:(id)a3;
- (void)receivedData:(id)a0 fromEndpoint:(id)a1 forPeripheral:(id)a2;
- (void)scanningFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (void)scanningStartedOfType:(unsigned char)a0;
- (void)scanningStoppedOfType:(unsigned char)a0;
- (void)sentData:(id)a0 forCharacteristic:(id)a1 inService:(id)a2 forPeripheral:(id)a3 withError:(id)a4;
- (void)sentData:(id)a0 toEndpoint:(id)a1 forPeripheral:(id)a2 withError:(id)a3;
- (void)startScanningForType:(long long)a0 withData:(id)a1;
- (void)startScanningForType:(long long)a0 withData:(id)a1 mask:(id)a2 peers:(id)a3 boostedScan:(char)a4;
- (void)startScanningForType:(long long)a0 withData:(id)a1 peers:(id)a2;
- (void)startedTrackingPeer:(id)a0 ofType:(unsigned char)a1;
- (void)stoppedTrackingPeer:(id)a0 ofType:(unsigned char)a1;
- (void)updateAdvertisingRequest:(id)a0 withUpdate:(id /* block */)a1;
- (void)updateScanningRequest:(id)a0 withUpdate:(id /* block */)a1;
- (void)updatedNotificationState:(char)a0 forCharacteristic:(id)a1 inService:(id)a2 withPeripheral:(id)a3;

@end
