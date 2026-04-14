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

- (void)setCurrentRoadName:(id)a0;
- (void)requestPositionFromSign;
- (void)setArrivedAtWaypoint:(id)a0 endOfLegIndex:(long long)a1;
- (void)requestGuidanceState;
- (void)close;
- (void)setStepIndex:(long long)a0;
- (void)requestStepIndex;
- (void)setRoute:(id)a0;
- (void)setNavigationSessionState:(unsigned long long)a0 transportType:(int)a1 isResumingMultipointRoute:(BOOL)a2;
- (void)setTrafficForCurrentRoute:(id)a0;
- (void)requestStepNameInfo;
- (void)setPositionFromDestination:(struct { double x0; double x1; })a0;
- (id)init;
- (void)setStepNameInfo:(id)a0;
- (void)requestPositionFromManeuver;
- (void)requestRideSelections;
- (void)requestActiveRouteDetailsData;
- (void)resume;
- (void)setGuidanceState:(id)a0;
- (void)notifyUpcomingNoCellCoverage:(id)a0;
- (void)setETAUpdate:(id)a0;
- (void)setNavigationVoiceVolume:(int)a0;
- (void)requestPositionFromDestination;
- (void)setPositionFromSign:(struct { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)setTransitRouteSummary:(id)a0;
- (void)setRouteSummary:(id)a0;
- (void)requestRoute;
- (void)requestTransitSummary;
- (void)dealloc;
- (void)setResumedNavigatingFromWaypoint:(id)a0 endOfLegIndex:(long long)a1;
- (void)setPositionFromManeuver:(struct { double x0; double x1; })a0;
- (void)requestNavigationVoiceVolume;
- (void)setLocation:(id)a0 routeCoordinate:(struct { unsigned int x0; float x1; })a1;
- (void)requestRouteSummary;
- (void)setNoCellCoverageAlertPrecedingTime:(double)a0;
- (void)requestETAUpdate;
- (void)setWantsRoutes:(BOOL)a0;
- (id)initWithConnection:(id)a0 details:(id)a1;
- (void)requestUpdates;
- (void)setETARoute:(id)a0;

@end
