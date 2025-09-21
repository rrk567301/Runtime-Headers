@class NSUUID, NSMutableSet, NSMutableData;
@protocol WPTransferDelegate;

@interface WPTransfer : WPClient

@property (weak) id<WPTransferDelegate> delegate;
@property char advertising;
@property char scanning;
@property char connectedToPeripheral;
@property char unsubscribeComing;
@property char advertiserConnected;
@property char sentEOM;
@property (retain) NSUUID *currentPeripheralUUID;
@property (retain) NSMutableSet *ignoredDevices;
@property (retain) NSMutableData *notificationData;
@property (retain) NSUUID *currentlySubscribedCentral;
@property long long lockScanTimer;
@property char sendingTransferComplete;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)stopAdvertising;
- (void)receivedData:(id)a0;
- (void)stopScan;
- (void)stateDidChange:(long long)a0;
- (void)startScan;
- (void)transferFailed:(id)a0;
- (void)advertisingFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (void)advertisingPendingOfType:(unsigned char)a0;
- (void)advertisingStartedOfType:(unsigned char)a0;
- (void)advertisingStoppedOfType:(unsigned char)a0 withError:(id)a1;
- (void)central:(id)a0 subscribed:(char)a1 toCharacteristic:(id)a2 inService:(id)a3;
- (id)clientAsString;
- (void)connectedDevice:(id)a0 withError:(id)a1 shouldDiscover:(char)a2;
- (void)deviceDiscovered:(id)a0;
- (void)disconnectedDevice:(id)a0 withError:(id)a1;
- (void)discoveredCharacteristicsAndServices:(id)a0 forPeripheral:(id)a1;
- (void)ignoreDevice;
- (id)initWithDelegate:(id)a0 queue:(id)a1 machName:(id)a2;
- (id)initWithDelegate:(id)a0 queue:(id)a1 machName:(id)a2 options:(id)a3;
- (void)populateClientGATT:(id /* block */)a0;
- (void)receivedData:(id)a0 forCharacteristic:(id)a1 inService:(id)a2 forPeripheral:(id)a3;
- (void)scanningFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (void)scanningStartedOfType:(unsigned char)a0;
- (void)scanningStoppedOfType:(unsigned char)a0;
- (void)sentData:(id)a0 forCharacteristic:(id)a1 inService:(id)a2 forPeripheral:(id)a3 withError:(id)a4;
- (void)sentData:(id)a0 toEndpoint:(id)a1 forPeripheral:(id)a2 withError:(id)a3;
- (void)startAdvertising;
- (void)updatedNotificationState:(char)a0 forCharacteristic:(id)a1 inService:(id)a2 withPeripheral:(id)a3;

@end
