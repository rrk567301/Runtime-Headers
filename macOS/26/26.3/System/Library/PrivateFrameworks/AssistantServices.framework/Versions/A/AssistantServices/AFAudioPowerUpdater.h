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

- (void)invalidate;
- (void)_timerFired;
- (id)_createNewXPCWrapper;
- (id)initWithProvider:(id)a0 queue:(id)a1 frequency:(long long)a2 delegate:(id)a3;
- (float)_unsafePeakPower;
- (float)_unsafeAveragePower;
- (id)_createSharedMemoryXPCObject;
- (BOOL)_createSharedMemory;
- (void)createNewXPCWrapperWithCompletion:(id /* block */)a0;
- (void)getPowerWithCompletion:(id /* block */)a0;
- (void)_writeSharedMemoryWithAveragePower:(float)a0 peakPower:(float)a1;
- (void)_createNewXPCWrapperWithCompletion:(id /* block */)a0;
- (void)_beginUpdate;
- (void).cxx_destruct;
- (void)endUpdate;
- (void)dealloc;
- (void)_updatePowerWithAveragePower:(float)a0 andPeakPower:(float)a1;
- (void)_endUpdate;
- (void)_destroySharedMemory;
- (void)beginUpdate;
- (void)_invalidate;
- (void)_getPowerWithCompletion:(id /* block */)a0;

@end
