@class NSString, GEONavigationServer;

@interface GEONavigationServerPeer : GEONavdPeer <GEONavigationServerRequestStateXPCInterface>

@property (weak, nonatomic) GEONavigationServer *delegate;
@property (nonatomic) char hasEntitlement;
@property (readonly, nonatomic) char wantsRoutes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setWantsRoutes:(char)a0;
- (void)requestActiveRouteDetailsData;
- (void)requestETAUpdate;
- (void)requestGuidanceState;
- (void)requestNavigationVoiceVolume;
- (void)requestPositionFromDestination;
- (void)requestPositionFromManeuver;
- (void)requestPositionFromSign;
- (void)requestRideSelections;
- (void)requestRoute;
- (void)requestRouteSummary;
- (void)requestStepIndex;
- (void)requestStepNameInfo;
- (void)requestTransitSummary;
- (void)requestUpdates;

@end
