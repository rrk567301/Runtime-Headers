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

- (void)setPositionFromSign:(struct { double x0; double x1; })a0;
- (void)setLocation:(id)a0 routeCoordinate:(struct { unsigned int x0; float x1; })a1;
- (void)requestGuidanceState;
- (void)setRoute:(id)a0;
- (void)dealloc;
- (void)setPositionFromDestination:(struct { double x0; double x1; })a0;
- (void)setRouteSummary:(id)a0;
- (void)setNoCellCoverageAlertPrecedingTime:(double)a0;
- (void)setResumedNavigatingFromWaypoint:(id)a0 endOfLegIndex:(long long)a1;
- (void)setNavigationSessionState:(unsigned long long)a0 transportType:(int)a1 isResumingMultipointRoute:(BOOL)a2;
- (void)requestActiveRouteDetailsData;
- (void)requestStepIndex;
- (void)setNavigationVoiceVolume:(int)a0;
- (void)setStepIndex:(long long)a0;
- (void)setETAUpdate:(id)a0;
- (void)resume;
- (id)init;
- (void)setTransitRouteSummary:(id)a0;
- (void)requestStepNameInfo;
- (void)setGuidanceState:(id)a0;
- (void)requestPositionFromSign;
- (void)requestRoute;
- (void)requestRideSelections;
- (void)setArrivedAtWaypoint:(id)a0 endOfLegIndex:(long long)a1;
- (void)setStepNameInfo:(id)a0;
- (void)requestTransitSummary;
- (void)notifyUpcomingNoCellCoverage:(id)a0;
- (void)requestNavigationVoiceVolume;
- (void)requestRouteSummary;
- (void)setTrafficForCurrentRoute:(id)a0;
- (void)setCurrentRoadName:(id)a0;
- (void)requestPositionFromDestination;
- (void)setPositionFromManeuver:(struct { double x0; double x1; })a0;
- (void)requestETAUpdate;
- (void)close;
- (void).cxx_destruct;
- (void)requestPositionFromManeuver;
- (void)setWantsRoutes:(BOOL)a0;
- (id)initWithConnection:(id)a0 details:(id)a1;
- (void)requestUpdates;
- (void)setETARoute:(id)a0;

@end
