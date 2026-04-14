@class CSManualDuckingHandler, NSString, NSMutableDictionary, NSHashTable, NSObject, CSAudioSessionController;
@protocol OS_dispatch_queue;

@interface CSSiriAudioPlaybackService : NSObject <AFMemoryPressureListening, AFAudioPlaybackService> {
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_listeners;
    NSMutableDictionary *_activeSessionsByRequest;
    NSMutableDictionary *_reusableSessionsByRequest;
    CSAudioSessionController *_audioSessionController;
    CSManualDuckingHandler *_manualDuckingHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedService;

- (void)removeListener:(id)a0;
- (void)addListener:(id)a0;
- (void)startRequest:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_unduck;
- (void)updateRequest:(id)a0 volume:(float)a1 fadeDuration:(double)a2 completion:(id /* block */)a3;
- (void)_invalidate;
- (void)removeAllListeners;
- (void)_duckForAudioPlayback;
- (void)_handleExecutionForSession:(id)a0;
- (void)_enumerateListenersUsingBlock:(id /* block */)a0;
- (void)_updateRequest:(id)a0 volume:(float)a1 fadeDuration:(double)a2 completion:(id /* block */)a3;
- (void)startRequest:(id)a0 options:(unsigned long long)a1 preparationHandler:(id /* block */)a2 executionHandler:(id /* block */)a3 finalizationHandler:(id /* block */)a4;
- (void).cxx_destruct;
- (void)_prewarmRequest:(id)a0 completion:(id /* block */)a1;
- (void)stopRequest:(id)a0 immediately:(BOOL)a1;
- (void)_handleFinalizationForSession:(id)a0 error:(id)a1;
- (void)prewarmRequest:(id)a0 completion:(id /* block */)a1;
- (void)stopAllRequests:(BOOL)a0 completion:(id /* block */)a1;
- (id)initWithAudioSessionController:(id)a0;
- (void)_injectSessionsByRequest:(id)a0;
- (void)_stopRequest:(id)a0 immediately:(BOOL)a1;
- (void)stopAllRequestsSynchronously;
- (id)_createAudioPlaybackSessionWithRequest:(id)a0 options:(unsigned long long)a1;
- (void)memoryPressureObserver:(id)a0 didChangeFromCondition:(long long)a1 toCondition:(long long)a2;
- (void)_handlePreparationForSession:(id)a0;
- (void)_stopAllRequests:(BOOL)a0 completion:(id /* block */)a1;
- (void)_startRequest:(id)a0 options:(unsigned long long)a1 preparationHandler:(id /* block */)a2 executionHandler:(id /* block */)a3 finalizationHandler:(id /* block */)a4;
- (void)_evictAllReusableSessionsForReason:(id)a0;
- (void)_stopAllRequestsSynchronously;

@end
