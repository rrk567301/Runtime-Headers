@class NSString, NSMapTable, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface _LTLanguageStatusMulticaster : NSObject <_LTSpeechTranslationDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_statusObservers;
    NSMutableDictionary *_lastStatusObservations;
    NSMutableDictionary *_connectionIdentifiers;
}

@property (nonatomic) BOOL test_avoidXPCConnections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)_removeAllObservers;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)init;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)_didEnterBackground:(id)a0;
- (void)_cancelWithConnectionIdentifier:(id)a0 taskHint:(long long)a1 useDedicatedMachPort:(BOOL)a2;
- (void)_closeConnectionForObserver:(id)a0;
- (void)_closeConnectionForced:(BOOL)a0 forIdentifier:(id)a1 taskHint:(long long)a2 engineType:(long long)a3 useDedicatedMachPort:(BOOL)a4 synchronous:(BOOL)a5;
- (BOOL)_connectObserverIfNeeded:(id)a0;
- (id)_currentObservers;
- (void)_didEnterForeground:(id)a0;
- (void)_multicastObservations:(id)a0 taskHint:(long long)a1 engineType:(long long)a2 progress:(BOOL)a3;
- (void)_reconnectIfStreamingWithConnectionIdentifier:(id)a0 taskHint:(long long)a1 engineType:(long long)a2 useDedicatedMachPort:(BOOL)a3;
- (void)_removeObserver:(id)a0 forceCloseConnection:(BOOL)a1 synchronous:(BOOL)a2;
- (void)_replayLastObservationsOnHeartbeat:(double)a0;
- (void)_startWithConnectionIdentifier:(id)a0 taskHint:(long long)a1 engineType:(long long)a2 useDedicatedMachPort:(BOOL)a3;
- (void)languageStatusChangedForTaskHint:(long long)a0 engineType:(long long)a1 progress:(BOOL)a2 observations:(id)a3;

@end
