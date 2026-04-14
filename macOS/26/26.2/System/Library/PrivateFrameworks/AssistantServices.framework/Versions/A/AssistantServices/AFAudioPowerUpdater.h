@class NSObject;
@protocol AFAudioPowerProviding, AFAudioPowerUpdaterDelegate, OS_dispatch_source, OS_dispatch_queue;

@interface AFAudioPowerUpdater : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    id<AFAudioPowerUpdaterDelegate> _delegate;
    void *_sharedMemory;
    float _averagePower;
    float _peakPower;
}

@property (readonly, nonatomic) id<AFAudioPowerProviding> provider;
@property (readonly, nonatomic) long long frequency;

- (void)_timerFired;
- (void)invalidate;
- (void)getPowerWithCompletion:(id /* block */)a0;
- (id)_createNewXPCWrapper;
- (void)_createNewXPCWrapperWithCompletion:(id /* block */)a0;
- (void)beginUpdate;
- (void)_destroySharedMemory;
- (void)_beginUpdate;
- (void).cxx_destruct;
- (void)_endUpdate;
- (void)_writeSharedMemoryWithAveragePower:(float)a0 peakPower:(float)a1;
- (void)_updatePowerWithAveragePower:(float)a0 andPeakPower:(float)a1;
- (void)_getPowerWithCompletion:(id /* block */)a0;
- (void)createNewXPCWrapperWithCompletion:(id /* block */)a0;
- (float)_unsafeAveragePower;
- (id)initWithProvider:(id)a0 queue:(id)a1 frequency:(long long)a2 delegate:(id)a3;
- (id)_createSharedMemoryXPCObject;
- (void)_invalidate;
- (void)endUpdate;
- (BOOL)_createSharedMemory;
- (float)_unsafePeakPower;
- (void)dealloc;

@end
