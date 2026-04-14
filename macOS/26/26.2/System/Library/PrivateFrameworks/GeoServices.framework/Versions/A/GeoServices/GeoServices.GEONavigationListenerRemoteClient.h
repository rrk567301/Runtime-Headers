@class NSString;

@interface GeoServices.GEONavigationListenerRemoteClient : NSObject <GeoServices.GEONavigationListener_ListenerToServerRequest_Interface, GeoServices.GEONavigationListener_ServerToListener_Interface> {
    void /* function */ interruptionHandler;
    void /* function */ invalidationHandler;
    void /* unknown type, empty encoding */ _noCellCoverageAlertPrecedingTime;
    void /* unknown type, empty encoding */ _wantsRoutes;
    void /* unknown type, empty encoding */ _details;
    void /* unknown type, empty encoding */ _connection;
    void /* unknown type, empty encoding */ _upcomingUnavailableCellCoverageSections;
    void /* unknown type, empty encoding */ _lastUnavailableCellCoverageUpdateTime;
    void /* unknown type, empty encoding */ _unavailableCellCoverageUpdateInterval;
}

@property (nonatomic, readonly) NSString *clientDescription;
@property (nonatomic, readonly) BOOL hasEntitlement;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;

- (void)requestTransitSummary;
- (void)setLocation:(id)a0 routeCoordinate:(struct { unsigned int x0; float x1; })a1;
- (void)setStepNameInfo:(id)a0;
- (void)setArrivedAtWaypoint:(id)a0 endOfLegIndex:(long long)a1;
- (void)requestRoute;
- (void)requestGuidanceState;
- (void)requestPositionFromDestination;
- (void)close;
- (void)setRoute:(id)a0;
- (void)setCurrentRoadName:(id)a0;
- (void)setNoCellCoverageAlertPrecedingTime:(double)a0;
- (void)requestNavigationVoiceVolume;
- (void)requestStepNameInfo;
- (void)notifyUpcomingNoCellCoverage:(id)a0;
- (void)setTrafficForCurrentRoute:(id)a0;
- (void)setNavigationSessionState:(unsigned long long)a0 transportType:(int)a1 isResumingMultipointRoute:(BOOL)a2;
- (void)resume;
- (void)requestActiveRouteDetailsData;
- (void)requestRouteSummary;
- (void).cxx_destruct;
- (void)setNavigationVoiceVolume:(int)a0;
- (void)requestRideSelections;
- (void)setPositionFromDestination:(struct { double x0; double x1; })a0;
- (void)setPositionFromSign:(struct { double x0; double x1; })a0;
- (void)setGuidanceState:(id)a0;
- (void)requestStepIndex;
- (void)setResumedNavigatingFromWaypoint:(id)a0 endOfLegIndex:(long long)a1;
- (void)requestETAUpdate;
- (void)setStepIndex:(long long)a0;
- (void)setTransitRouteSummary:(id)a0;
- (id)init;
- (void)requestPositionFromManeuver;
- (void)setETAUpdate:(id)a0;
- (void)setPositionFromManeuver:(struct { double x0; double x1; })a0;
- (void)setRouteSummary:(id)a0;
- (void)dealloc;
- (void)requestPositionFromSign;
- (void)setWantsRoutes:(BOOL)a0;
- (id)initWithConnection:(id)a0 details:(id)a1;
- (void)requestUpdates;
- (void)setETARoute:(id)a0;

@end
