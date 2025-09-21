@class NSString, CUTWeakReference, NSObject;
@protocol OS_dispatch_queue;

@interface _IDSContinuity : NSObject <IDSDaemonListenerProtocol> {
    id _delegateContext;
    CUTWeakReference *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_callDelegateWithBlock:(id /* block */)a0;
- (void)_daemonDied:(id)a0;
- (void)_handleReconnect;
- (void)continuityDidDiscoverType:(long long)a0 withData:(id)a1 fromPeer:(id)a2;
- (void)continuityDidFailToStartAdvertisingOfType:(long long)a0 withError:(id)a1;
- (void)continuityDidFailToStartScanningForType:(long long)a0 withError:(id)a1;
- (void)continuityDidLosePeer:(id)a0;
- (void)continuityDidLosePeer:(id)a0 forType:(long long)a1;
- (void)continuityDidStartAdvertisingOfType:(long long)a0;
- (void)continuityDidStartScanningForType:(long long)a0;
- (void)continuityDidStartTrackingPeer:(id)a0 error:(id)a1;
- (void)continuityDidStartTrackingPeer:(id)a0 forType:(long long)a1 error:(id)a2;
- (void)continuityDidStopAdvertisingOfType:(long long)a0;
- (void)continuityDidStopAdvertisingOfType:(long long)a0 withError:(id)a1;
- (void)continuityDidStopScanningForType:(long long)a0;
- (void)continuityDidStopTrackingPeer:(id)a0;
- (void)continuityDidStopTrackingPeer:(id)a0 forType:(long long)a1;
- (void)continuityDidUpdateStateToState:(long long)a0;
- (id)initWithDelegate:(id)a0 queue:(id)a1 delegateContext:(id)a2;
- (void)startAdvertisingOfType:(long long)a0 withData:(id)a1 withOptions:(id)a2;
- (void)startScanningForType:(long long)a0 withData:(id)a1 mask:(id)a2;
- (void)startScanningForType:(long long)a0 withData:(id)a1 mask:(id)a2 boostedScan:(char)a3 duplicates:(char)a4;
- (void)startScanningForType:(long long)a0 withData:(id)a1 mask:(id)a2 peers:(id)a3;
- (void)startScanningForType:(long long)a0 withData:(id)a1 mask:(id)a2 peers:(id)a3 boostedScan:(char)a4 duplicates:(char)a5;
- (void)startTrackingPeer:(id)a0 forType:(long long)a1;
- (void)stopAdvertisingOfType:(long long)a0;
- (void)stopScanningForType:(long long)a0;
- (void)stopTrackingPeer:(id)a0 forType:(long long)a1;

@end
