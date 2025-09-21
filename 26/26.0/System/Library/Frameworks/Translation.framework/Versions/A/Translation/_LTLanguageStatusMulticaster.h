@class NSString, NSMapTable, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface _LTLanguageStatusMulticaster : NSObject <_LTSpeechTranslationDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_statusObservers;
    NSMutableDictionary *_lastStatusObservations;
    NSMutableDictionary *_connectionIdentifiers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)_removeAllObservers;
- (id)init;
- (void)addObserver:(id)a0;
- (void).cxx_destruct;
- (void)_didEnterBackground:(id)a0;
- (void)_cancelWithConnectionIdentifier:(id)a0 taskHint:(long long)a1 useDedicatedMachPort:(BOOL)a2;
- (void)_closeConnectionForObserver:(id)a0;
- (void)_closeConnectionForced:(BOOL)a0 forIdentifier:(id)a1 taskHint:(long long)a2 useDedicatedMachPort:(BOOL)a3;
- (BOOL)_connectObserverIfNeeded:(id)a0;
- (id)_currentObservers;
- (void)_didEnterForeground:(id)a0;
- (void)_multicastObservations:(id)a0 taskHint:(long long)a1 progress:(BOOL)a2;
- (void)_reconnectIfStreamingWithConnectionIdentifier:(id)a0 taskHint:(long long)a1 useDedicatedMachPort:(BOOL)a2;
- (void)_removeObserver:(id)a0 forceCloseConnection:(BOOL)a1;
- (void)_replayLastObservationsOnHeartbeat:(double)a0;
- (void)_startWithConnectionIdentifier:(id)a0 taskHint:(long long)a1 useDedicatedMachPort:(BOOL)a2;
- (void)languageStatusChangedForTaskHint:(long long)a0 progress:(BOOL)a1 observations:(id)a2;

@end
