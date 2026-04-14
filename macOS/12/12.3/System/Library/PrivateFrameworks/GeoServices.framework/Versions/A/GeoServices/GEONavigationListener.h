@class NSString, GEOLocation, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, GEONavigationListenerDelegate;

@interface GEONavigationListener : NSObject <GEONavigationServerListenerXPCInterface> {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    int _navigationStartedToken;
    int _navigationStoppedToken;
    int _navigationRoutePreviewToken;
    BOOL _wantsRoutes;
    int _transportType;
    GEOLocation *_lastLocation;
}

@property (readonly, nonatomic) GEOLocation *lastLocation;
@property (weak, nonatomic) id<GEONavigationListenerDelegate> delegate;
@property (readonly, nonatomic) unsigned long long navigationState;
@property (readonly, nonatomic) NSString *currentRoadName;
@property (copy, nonatomic) id /* block */ routeSummaryUpdatedHandler;
@property (copy, nonatomic) id /* block */ transitSummaryUpdatedHandler;
@property (copy, nonatomic) id /* block */ guidanceStateUpdatedHandler;
@property (copy, nonatomic) id /* block */ activeRouteDetailsDataUpdatedHandler;
@property (copy, nonatomic) id /* block */ stepIndexUpdatedHandler;
@property (copy, nonatomic) id /* block */ rideSelectionsUpdatedHandler;
@property (copy, nonatomic) id /* block */ positionFromSignUpdatedHandler;
@property (copy, nonatomic) id /* block */ positionFromManeuverUpdatedHandler;
@property (copy, nonatomic) id /* block */ positionFromDestinationUpdatedHandler;
@property (copy, nonatomic) id /* block */ navigationVoiceVolumeUpdatedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)requestRouteSummary;
- (void)requestTransitSummary;
- (void)requestGuidanceState;
- (void)requestActiveRouteDetailsData;
- (void)requestStepIndex;
- (void)requestStepNameInfo;
- (void)requestRideSelections;
- (void)requestPositionFromSign;
- (void)requestPositionFromManeuver;
- (void)requestPositionFromDestination;
- (void)requestNavigationVoiceVolume;
- (void)requestRoute;
- (void)navigationStateChanged:(unsigned long long)a0 transportType:(int)a1;
- (void)didUpdateLocation:(id)a0;
- (void)didUpdateRoute:(id)a0;
- (void)didUpdateTrafficForCurrentRoute:(id)a0;
- (void)didArriveAtWaypoint:(id)a0 endOfLegIndex:(unsigned long long)a1;
- (void)routeSummaryUpdatedWithNavigationRouteSummaryData:(id)a0;
- (void)routeSummaryUpdatedWithTransitSummaryData:(id)a0;
- (void)routeSummaryUpdatedWithGuidanceStateData:(id)a0;
- (void)routeSummaryUpdatedWithActiveRouteDetailsData:(id)a0;
- (void)routeSummaryUpdatedWithStepIndexData:(id)a0;
- (void)routeSummaryUpdatedWithStepNameInfoData:(id)a0;
- (void)routeSummaryUpdatedWithRideSelectionData:(id)a0;
- (void)routeSummaryUpdatedWithPositionFromSignData:(id)a0;
- (void)routeSummaryUpdatedWithPositionFromManeuverData:(id)a0;
- (void)routeSummaryUpdatedWithPositionFromDestinationData:(id)a0;
- (void)navigationUpdatedWithVoiceVolumeData:(id)a0;
- (void)currentRoadNameUpdated:(id)a0;
- (id)initWithQueue:(id)a0 wantsRoutes:(BOOL)a1;

@end
