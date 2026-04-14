@class NSString, GEONavigationServer;

@interface GEONavigationServerPeer : GEONavdPeer <GEONavigationServerRequestStateXPCInterface>

@property (weak, nonatomic) GEONavigationServer *delegate;
@property (nonatomic) BOOL hasEntitlement;
@property (readonly, nonatomic) BOOL wantsRoutes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)requestRoute;
- (void)requestRouteSummary;
- (void)requestTransitSummary;
- (void)requestGuidanceState;
- (void)requestUpdates;
- (void)requestActiveRouteDetailsData;
- (void)requestStepIndex;
- (void)requestStepNameInfo;
- (void)requestRideSelections;
- (void)requestPositionFromSign;
- (void)requestPositionFromManeuver;
- (void)requestPositionFromDestination;
- (void)requestNavigationVoiceVolume;
- (void)requestETAUpdate;
- (void)setWantsRoutes:(BOOL)a0;

@end
