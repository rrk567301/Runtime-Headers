@class NSError, PXObservable;

@interface PXDefaultAppleMusicStatusProvider : NSObject <PXAppleMusicStatusProvider> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_systemTCCStatusProvider;
    void /* unknown type, empty encoding */ injectedTCCStatusProvider;
    void /* unknown type, empty encoding */ cloudStatusMonitor;
    void /* unknown type, empty encoding */ lockedState;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) PXObservable *observable;

- (void).cxx_destruct;
- (id)init;
- (void)requestStatusForCapability:(long long)a0 handler:(id /* block */)a1;
- (void)startGatheringCapabilityStatuses;
- (long long)statusForCapability:(long long)a0;

@end
