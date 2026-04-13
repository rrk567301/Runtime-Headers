@class NSMutableDictionary, NSDictionary, WPAirPlaySolo, NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, APBluetoothClientDelegate;

@interface APBluetoothClient : NSObject <WPAirPlaySoloDelegate> {
    id<APBluetoothClientDelegate> _delegate;
}

@property (nonatomic) BOOL isFirstCycle;
@property (nonatomic) BOOL isSourcePresenceAdvertising;
@property (nonatomic) BOOL isStartAdvertisingPending;
@property (nonatomic) BOOL isStopAdvertisingPending;
@property (retain, nonatomic) NSMutableDictionary *nearbyDevices;
@property (nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) NSDictionary *sourcePresenceAdvertisingData;
@property (nonatomic) NSObject<OS_dispatch_source> *sourcePresenceAdvertisingTimer;
@property (nonatomic) NSObject<OS_dispatch_source> *sourcePresenceWaitingTimer;
@property (retain, nonatomic) WPAirPlaySolo *wpAirPlaySolo;
@property (readonly) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)startConnectionlessAdvertisingWithData:(id)a0;
- (void)stopConnectionlessAdvertising;
- (void)startConnectionlessScanningWithData:(id)a0;
- (void)stopConnectionlessScanningWithData:(id)a0;
- (void)startTrackingPeer:(id)a0 withData:(id)a1;
- (void)airPlaySoloDidUpdateState:(id)a0;
- (void)airPlaySolo:(id)a0 foundDevice:(id)a1 withData:(id)a2;
- (void)airPlaySoloStartedAdvertising:(id)a0;
- (void)airPlaySoloAdvertisingPending:(id)a0;
- (void)airPlaySoloStoppedAdvertising:(id)a0;
- (void)airPlaySolo:(id)a0 failedToStartAdvertisingWithError:(id)a1;
- (void)airPlaySoloStartedScanning:(id)a0;
- (void)airPlaySoloStoppedScanning:(id)a0;
- (void)airPlaySolo:(id)a0 failedToStartScanningWithError:(id)a1;
- (void)airPlaySolo:(id)a0 didStartTrackingPeer:(id)a1 withData:(id)a2 error:(id)a3;
- (void)airPlaySolo:(id)a0 didStopTrackingPeer:(id)a1 withData:(id)a2;
- (void)airPlaySolo:(id)a0 didLosePeer:(id)a1 withData:(id)a2;
- (void)stopSourcePresenceWaitingCycle;
- (void)startSourcePresenceAdvertisingCycle;
- (void)stopSourcePresenceAdvertisingCycle;
- (void)startSourcePresenceWaitingCycle;
- (void)startSourcePresenceConnectionlessAdvertising;
- (void)stopSourcePresenceConnectionlessAdvertising;
- (void)stopTrackingPeer:(id)a0 withData:(id)a1;

@end
