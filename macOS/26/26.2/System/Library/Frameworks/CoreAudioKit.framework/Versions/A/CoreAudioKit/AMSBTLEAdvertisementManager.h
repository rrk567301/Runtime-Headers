@class NSString, CBPeripheralManager;

@interface AMSBTLEAdvertisementManager : NSObject <CBPeripheralManagerDelegate> {
    CBPeripheralManager *peripheralManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)peripheralManagerDidUpdateState:(id)a0;
- (void)peripheralManagerDidStartAdvertising:(id)a0 error:(id)a1;
- (BOOL)isAdvertising;
- (void)peripheralManager:(id)a0 didReceiveReadRequest:(id)a1;
- (id)init;
- (void)dealloc;
- (void)advertiseMIDIService;
- (BOOL)isLECapableHardware;
- (void)stopAdvertisingMIDIService;

@end
