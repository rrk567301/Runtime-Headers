@class _IDSContinuity;

@interface IDSContinuity : NSObject {
    _IDSContinuity *_internal;
}

@property (readonly) long long state;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)connectToPeer:(id)a0;
- (void)disconnectFromPeer:(id)a0;
- (void)startAdvertisingOfType:(long long)a0 withData:(id)a1 withOptions:(id)a2;
- (void)startScanningForType:(long long)a0 withData:(id)a1 mask:(id)a2 peers:(id)a3 withOptions:(id)a4;
- (void)startScanningForType:(long long)a0 withData:(id)a1 mask:(id)a2 peers:(id)a3 withOptions:(id)a4 boostedScan:(char)a5;
- (void)startScanningForType:(long long)a0 withData:(id)a1 mask:(id)a2 peers:(id)a3 withOptions:(id)a4 boostedScan:(char)a5 duplicates:(char)a6;
- (void)startScanningForType:(long long)a0 withData:(id)a1 mask:(id)a2 withOptions:(id)a3;
- (void)startScanningForType:(long long)a0 withData:(id)a1 mask:(id)a2 withOptions:(id)a3 boostedScan:(char)a4;
- (void)startScanningForType:(long long)a0 withData:(id)a1 mask:(id)a2 withOptions:(id)a3 boostedScan:(char)a4 duplicates:(char)a5;
- (void)startScanningForType:(long long)a0 withData:(id)a1 peers:(id)a2 withOptions:(id)a3;
- (void)startScanningForType:(long long)a0 withData:(id)a1 withOptions:(id)a2;
- (void)startTrackingPeer:(id)a0;
- (void)startTrackingPeer:(id)a0 forType:(long long)a1;
- (void)stopAdvertisingOfType:(long long)a0;
- (void)stopScanningForType:(long long)a0;
- (void)stopTrackingPeer:(id)a0;
- (void)stopTrackingPeer:(id)a0 forType:(long long)a1;

@end
