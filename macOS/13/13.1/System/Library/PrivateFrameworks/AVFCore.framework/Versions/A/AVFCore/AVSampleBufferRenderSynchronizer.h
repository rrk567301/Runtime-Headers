@class NSArray, AVSampleBufferRenderSynchronizerInternal;

@interface AVSampleBufferRenderSynchronizer : NSObject {
    AVSampleBufferRenderSynchronizerInternal *_synchronizerInternal;
}

@property (readonly) NSArray *renderers;
@property (readonly, retain) struct OpaqueCMTimebase { } *timebase;
@property (nonatomic) float rate;
@property (nonatomic) BOOL delaysRateChangeUntilHasSufficientMediaData;

+ (id)currentFigRenderSynchronizerFactory;
+ (void)setFigRenderSynchronizerFactory:(id)a0 forQueue:(id)a1;

- (void)dealloc;
- (id)init;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentTime;
- (void)setRate:(float)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 atHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (id)addPeriodicTimeObserverForInterval:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 queue:(id)a1 usingBlock:(id /* block */)a2;
- (id)addBoundaryTimeObserverForTimes:(id)a0 queue:(id)a1 usingBlock:(id /* block */)a2;
- (void)removeTimeObserver:(id)a0;
- (int)_initializeTimebase;
- (void)setRate:(float)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (BOOL)setRate:(float)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 atHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 error:(id *)a3;
- (int)_setRate:(float)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 atHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)_updateRateFromTimebase;
- (BOOL)_addRenderer:(id)a0 error:(id *)a1;
- (void)addRenderer:(id)a0;
- (id)_getTimebaseObserverForRenderer:(id)a0;
- (id /* block */)_getClientCompletionHandlerForRenderer:(id)a0;
- (void)_removeTimebaseObserverForRenderer:(id)a0;
- (void)_storeObserver:(id)a0 clientCompletionHandler:(id /* block */)a1 forRenderer:(id)a2;
- (id)_createOnceTimebaseObserverForRemovalOfRenderer:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (BOOL)_scheduleTimedRendererRemovalAtTime:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 withClientCompletionHandler:(id /* block */)a2;
- (void)removeRenderer:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 withCompletionHandler:(id /* block */)a2;
- (void)removeRenderer:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 completionHandler:(id /* block */)a2;
- (void)_performRendererRemoval:(id)a0;
- (BOOL)_canAddRendererInternal:(id)a0 error:(id *)a1;
- (BOOL)_rendererConfigurationIsValid:(id *)a0;
- (BOOL)_multipleAudioRenderersDisallowed;
- (long long)_addedAudioRendererCount;
- (long long)_addedAudioRendererCountInternal;

@end
