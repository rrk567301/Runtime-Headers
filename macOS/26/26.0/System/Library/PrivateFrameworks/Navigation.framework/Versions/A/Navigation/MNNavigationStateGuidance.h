@class MNNavigationSessionManager, MNStartNavigationDetails;

@interface MNNavigationStateGuidance : MNNavigationState {
    MNNavigationSessionManager *_navigationSessionManager;
    MNStartNavigationDetails *_startDetails;
}

+ (id)guidanceStateForStartDetails:(id)a0 stateManager:(id)a1 navigationSessionManager:(id)a2;

- (void)switchToRoute:(id)a0;
- (void)repeatCurrentTrafficAlertWithReply:(id /* block */)a0;
- (void)updateForUserIncidentReport:(id)a0;
- (void)insertWaypoint:(id)a0;
- (void)setSimulationSpeedOverride:(double)a0;
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)a0;
- (void)removeWaypointAtIndex:(unsigned long long)a0;
- (void)stopNavigationWithReason:(unsigned long long)a0;
- (void)resumeOriginalDestination;
- (void)setIsDisplayingNavigationTray:(BOOL)a0;
- (void)setSimulationSpeedMultiplier:(double)a0;
- (void)setTracePlaybackSpeed:(double)a0;
- (void)setDisplayedStepIndex:(unsigned long long)a0;
- (void)setRideIndex:(unsigned long long)a0 forSegmentIndex:(unsigned long long)a1;
- (void)setSimulationPosition:(double)a0;
- (void)switchToDestinationRoute;
- (void)stopCurrentGuidancePrompt;
- (void)setVoiceGuidanceLevelOverride:(unsigned long long)a0;
- (void)enableNavigationCapability:(unsigned long long)a0;
- (void)setTraceIsPlaying:(BOOL)a0;
- (void)changeTransportType:(int)a0 route:(id)a1;
- (void)resumeRealtimeUpdatesForSubscriber:(id)a0;
- (void)advanceToNextLeg;
- (void)acceptReroute:(BOOL)a0 forTrafficIncidentAlert:(id)a1;
- (void)forceReroute;
- (void)disableNavigationCapability:(unsigned long long)a0;
- (void)vibrateForPrompt:(unsigned long long)a0 withReply:(id /* block */)a1;
- (void)rerouteWithWaypoints:(id)a0;
- (void)pauseRealtimeUpdatesForSubscriber:(id)a0;
- (void)updateDestination:(id)a0;
- (void)setIsConnectedToCarplay:(BOOL)a0;
- (void)repeatCurrentGuidanceWithReply:(id /* block */)a0;
- (void)postEnterState;
- (void)enterState;
- (void)recordPedestrianTracePath:(id)a0;
- (void)setTracePosition:(double)a0;
- (long long)desiredLocationProviderType;
- (void)setJunctionViewImageWidth:(double)a0 height:(double)a1;
- (void).cxx_destruct;
- (id)currentDestination;
- (id)clParameters;
- (id)initWithStateManager:(id)a0 navigationSessionManager:(id)a1 startDetails:(id)a2;
- (void)leaveState;
- (void)preEnterState;
- (BOOL)requiresHighMemoryThreshold;
- (BOOL)shouldClearStoredRoutes;
- (id)simulationLocationProvider;
- (id)traceManager;

@end
