@class NSString, MTTimerStorage, MTXPCConnectionListenerProvider, _TtC11MobileTimer13VoidConductor;
@protocol NAScheduler;

@interface MTTimerServer : NSObject <MTTimerObserver, MTTimerServer, MTDurationUpdateDelegate, MTAgentDiagnosticDelegate>

@property (readonly, nonatomic) MTTimerStorage *storage;
@property (readonly, nonatomic) MTXPCConnectionListenerProvider *connectionListenerProvider;
@property (readonly, nonatomic, getter=isSystemReady) BOOL systemReady;
@property (retain, nonatomic) id<NAScheduler> serializer;
@property (retain, nonatomic) _TtC11MobileTimer13VoidConductor *conductor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)gatherDiagnostics;
- (id)initWithStorage:(id)a0;
- (void)printDiagnostics;
- (void)checkIn;
- (void)removeFavoriteDuration:(id)a0 withCompletion:(id /* block */)a1;
- (void)source:(id)a0 didDismissTimer:(id)a1;
- (void)getTimersWithCompletion:(id /* block */)a0;
- (void)handleSystemReady;
- (void)saveLatestDuration:(id)a0 withCompletion:(id /* block */)a1;
- (void)source:(id)a0 didUpdateTimers:(id)a1;
- (BOOL)_isSystemReady;
- (void)getTimerDurationsWithCompletion:(id /* block */)a0;
- (void)source:(id)a0 didRemoveTimers:(id)a1;
- (void)updateTimer:(id)a0 withCompletion:(id /* block */)a1;
- (void)stopListening;
- (void)repeatTimerWithIdentifier:(id)a0 withCompletion:(id /* block */)a1;
- (void)startListening;
- (void)source:(id)a0 didFireTimer:(id)a1;
- (void).cxx_destruct;
- (void)recentTimerDurationsDidUpdate:(id)a0;
- (void)removeTimer:(id)a0 withCompletion:(id /* block */)a1;
- (void)addRecentDuration:(id)a0 withCompletion:(id /* block */)a1;
- (void)removeRecentDuration:(id)a0 withCompletion:(id /* block */)a1;
- (void)source:(id)a0 didAddTimers:(id)a1;
- (void)nextTimerDidChange:(id)a0;
- (void)addTimer:(id)a0 withCompletion:(id /* block */)a1;
- (void)favoriteTimerDurationsDidUpdate:(id)a0;
- (void)addFavoriteDuration:(id)a0 withCompletion:(id /* block */)a1;
- (id)_systemNotReadyError;
- (id)initWithStorage:(id)a0 connectionListenerProvider:(id)a1;
- (void)dismissTimerWithIdentifier:(id)a0 withCompletion:(id /* block */)a1;
- (void)latestTimerDurationDidUpdate:(id)a0;

@end
