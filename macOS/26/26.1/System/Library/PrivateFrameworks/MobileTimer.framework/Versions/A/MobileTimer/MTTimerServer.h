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

- (id)initWithStorage:(id)a0;
- (void)stopListening;
- (void)printDiagnostics;
- (void)checkIn;
- (void)removeTimer:(id)a0 withCompletion:(id /* block */)a1;
- (void)startListening;
- (id)initWithStorage:(id)a0 connectionListenerProvider:(id)a1;
- (void)addRecentDuration:(id)a0 withCompletion:(id /* block */)a1;
- (void)saveLatestDuration:(id)a0 withCompletion:(id /* block */)a1;
- (void)getTimersWithCompletion:(id /* block */)a0;
- (void)source:(id)a0 didUpdateTimers:(id)a1;
- (void)source:(id)a0 didAddTimers:(id)a1;
- (void)handleSystemReady;
- (void)repeatTimerWithIdentifier:(id)a0 withCompletion:(id /* block */)a1;
- (void)favoriteTimerDurationsDidUpdate:(id)a0;
- (void)removeFavoriteDuration:(id)a0 withCompletion:(id /* block */)a1;
- (void)source:(id)a0 didDismissTimer:(id)a1;
- (void)getTimerDurationsWithCompletion:(id /* block */)a0;
- (BOOL)_isSystemReady;
- (void)addTimer:(id)a0 withCompletion:(id /* block */)a1;
- (void)dismissTimerWithIdentifier:(id)a0 withCompletion:(id /* block */)a1;
- (void)updateTimer:(id)a0 withCompletion:(id /* block */)a1;
- (id)_systemNotReadyError;
- (void)recentTimerDurationsDidUpdate:(id)a0;
- (void).cxx_destruct;
- (void)removeRecentDuration:(id)a0 withCompletion:(id /* block */)a1;
- (void)latestTimerDurationDidUpdate:(id)a0;
- (id)gatherDiagnostics;
- (void)nextTimerDidChange:(id)a0;
- (void)source:(id)a0 didFireTimer:(id)a1;
- (void)source:(id)a0 didRemoveTimers:(id)a1;
- (void)addFavoriteDuration:(id)a0 withCompletion:(id /* block */)a1;

@end
