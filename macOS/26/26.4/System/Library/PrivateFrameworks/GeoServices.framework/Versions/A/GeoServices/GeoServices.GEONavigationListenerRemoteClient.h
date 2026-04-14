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

- (void)resume;
- (void)notifyUpcomingNoCellCoverage:(id)a0;
- (void)requestTransitSummary;
- (void)setLocation:(id)a0 routeCoordinate:(struct { unsigned int x0; float x1; })a1;
- (void)requestNavigationVoiceVolume;
- (void)setCurrentRoadName:(id)a0;
- (void)setGuidanceState:(id)a0;
- (void)setETAUpdate:(id)a0;
- (void)setTrafficForCurrentRoute:(id)a0;
- (void)setPositionFromManeuver:(struct { double x0; double x1; })a0;
- (void)requestStepIndex;
- (void)setTransitRouteSummary:(id)a0;
- (void)requestRouteSummary;
- (void)setRoute:(id)a0;
- (void)setPositionFromDestination:(struct { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)setRouteSummary:(id)a0;
- (void)setNavigationVoiceVolume:(int)a0;
- (void)requestActiveRouteDetailsData;
- (void)requestStepNameInfo;
- (void)requestPositionFromDestination;
- (void)setPositionFromSign:(struct { double x0; double x1; })a0;
- (void)requestGuidanceState;
- (id)init;
- (void)setArrivedAtWaypoint:(id)a0 endOfLegIndex:(long long)a1;
- (void)setStepIndex:(long long)a0;
- (void)requestRoute;
- (void)requestRideSelections;
- (void)setStepNameInfo:(id)a0;
- (void)setResumedNavigatingFromWaypoint:(id)a0 endOfLegIndex:(long long)a1;
- (void)setNavigationSessionState:(unsigned long long)a0 transportType:(int)a1 isResumingMultipointRoute:(BOOL)a2;
- (void)close;
- (void)requestPositionFromManeuver;
- (void)setNoCellCoverageAlertPrecedingTime:(double)a0;
- (void)dealloc;
- (void)requestETAUpdate;
- (void)requestPositionFromSign;
- (void)setWantsRoutes:(BOOL)a0;
- (id)initWithConnection:(id)a0 details:(id)a1;
- (void)requestUpdates;
- (void)setETARoute:(id)a0;

@end
