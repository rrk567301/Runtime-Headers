@class NSArray, MNNavigationSessionManager;

@interface MNNavigationStateRoutePreview : MNNavigationState {
    NSArray *_previewRoutes;
    unsigned long long _selectedRouteIndex;
    MNNavigationSessionManager *_navigationSessionManager;
}

- (void).cxx_destruct;
- (unsigned long long)type;
- (void)enterState;
- (void)setRoutesForPreview:(id)a0 selectedRouteIndex:(unsigned long long)a1;
- (void)startNavigationWithDetails:(id)a0 activeBlock:(id /* block */)a1;
- (void)stopNavigationWithReason:(unsigned long long)a0;
- (void)pauseRealtimeUpdatesForSubscriber:(id)a0;
- (void)resumeRealtimeUpdatesForSubscriber:(id)a0;
- (void)leaveState;
- (BOOL)requiresHighMemoryThreshold;
- (unsigned long long)desiredLocationProviderType;
- (BOOL)shouldClearStoredRoutes;
- (id)traceManager;
- (id)simulationLocationProvider;
- (id)initWithStateManager:(id)a0 previewRoutes:(id)a1 selectedRouteIndex:(unsigned long long)a2;

@end
