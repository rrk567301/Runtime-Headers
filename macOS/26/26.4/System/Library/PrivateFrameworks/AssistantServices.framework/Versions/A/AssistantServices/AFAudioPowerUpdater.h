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

- (void)_endUpdate;
- (BOOL)_createSharedMemory;
- (id)_createSharedMemoryXPCObject;
- (void)_createNewXPCWrapperWithCompletion:(id /* block */)a0;
- (void)getPowerWithCompletion:(id /* block */)a0;
- (void)_timerFired;
- (float)_unsafeAveragePower;
- (void)_invalidate;
- (void)createNewXPCWrapperWithCompletion:(id /* block */)a0;
- (float)_unsafePeakPower;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_writeSharedMemoryWithAveragePower:(float)a0 peakPower:(float)a1;
- (void)_destroySharedMemory;
- (id)initWithProvider:(id)a0 queue:(id)a1 frequency:(long long)a2 delegate:(id)a3;
- (id)_createNewXPCWrapper;
- (void)_getPowerWithCompletion:(id /* block */)a0;
- (void)_updatePowerWithAveragePower:(float)a0 andPeakPower:(float)a1;
- (void)beginUpdate;
- (void)dealloc;
- (void)_beginUpdate;
- (void)endUpdate;

@end
