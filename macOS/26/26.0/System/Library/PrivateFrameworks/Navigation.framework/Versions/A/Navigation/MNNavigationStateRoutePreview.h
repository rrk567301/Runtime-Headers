@class NSArray, MNNavigationSessionManager;

@interface MNNavigationStateRoutePreview : MNNavigationState {
    NSArray *_previewRoutes;
    unsigned long long _selectedRouteIndex;
    MNNavigationSessionManager *_navigationSessionManager;
}

- (void)stopNavigationWithReason:(unsigned long long)a0;
- (void)startNavigationWithDetails:(id)a0 activeBlock:(id /* block */)a1;
- (void)resumeRealtimeUpdatesForSubscriber:(id)a0;
- (void)setRoutesForPreview:(id)a0 selectedRouteIndex:(unsigned long long)a1;
- (void)pauseRealtimeUpdatesForSubscriber:(id)a0;
- (void)enterState;
- (long long)desiredLocationProviderType;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)initWithStateManager:(id)a0 previewRoutes:(id)a1 selectedRouteIndex:(unsigned long long)a2;
- (void)leaveState;
- (BOOL)requiresHighMemoryThreshold;
- (BOOL)shouldClearStoredRoutes;
- (id)simulationLocationProvider;
- (id)traceManager;

@end
