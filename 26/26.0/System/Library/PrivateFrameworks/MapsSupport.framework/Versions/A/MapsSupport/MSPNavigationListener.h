@class NSString, GEOSharedNavState, GEONavigationListener, GEONavigationGuidanceState, NSObject;
@protocol MSPNavigationListenerDelegate, OS_os_transaction;

@interface MSPNavigationListener : NSObject <GEONavigationListenerPrivateDelegate> {
    GEONavigationListener *_navigationListener;
    GEONavigationGuidanceState *_guidanceState;
    NSObject<OS_os_transaction> *_transaction;
    GEOSharedNavState *_state;
    BOOL _postedStateIsReady;
    NSString *_navigationSessionIdentifier;
}

@property (retain, nonatomic) GEOSharedNavState *currentState;
@property (weak, nonatomic) id<MSPNavigationListenerDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *navigationSessionIdentifier;
@property (readonly, nonatomic) BOOL isInNavigatingState;
@property (readonly, nonatomic) BOOL isCompatibleTransportType;
@property (readonly, nonatomic) BOOL isCompatibleNavigationType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_initPendingStateIfNeeded;
- (void)_updateRoute:(id)a0;
- (void)_clearArrivedState;
- (BOOL)_updateArrivalTimeAndDistance:(id)a0;
- (void)_performDelegateNotificationBlockIfReady:(id /* block */)a0;
- (int)_referenceFrameForDestination:(id)a0;
- (void)dealloc;
- (BOOL)_updateLocation:(id)a0 withRouteMatchedCoordinate:(struct { unsigned int x0; float x1; })a1;
- (int)_currentTransportType;
- (BOOL)_isCompatibleTransportType:(int)a0;
- (BOOL)_updateTraffic:(id)a0;
- (void)navigationListener:(id)a0 didUpdateRoute:(id)a1;
- (void)navigationListener:(id)a0 didResumeNavigatingFromWaypoint:(id)a1 endOfLegIndex:(unsigned long long)a2;
- (id)init;
- (void)navigationListener:(id)a0 didChangeNavigationState:(unsigned long long)a1 transportType:(int)a2;
- (void)navigationListener:(id)a0 didArriveAtWaypoint:(id)a1 endOfLegIndex:(unsigned long long)a2;
- (void)_updateCurrentWaypointIndexFromArrivalTimeInfo:(id)a0;
- (int)_analyticsPipelineTransportModeForGEOTransportType:(int)a0;
- (void)navigationListener:(id)a0 didUpdateTrafficForCurrentRoute:(id)a1;
- (void)_updateTransportTypeFromCurrentState;
- (void)navigationListener:(id)a0 didUpdateLocation:(id)a1 routeMatchedCoordinate:(struct { unsigned int x0; float x1; })a2;
- (void)_updateTransaction;
- (void)navigationListener:(id)a0 didUpdateETA:(id)a1;
- (void)navigationListener:(id)a0 didUpdateGuidanceState:(id)a1;
- (void)_initPendingStateIfNeededWithTransportType:(int)a0 isResumingMultipointRoute:(BOOL)a1;
- (void)_checkStateIsReady;
- (BOOL)_currentlyArrivedAtWaypoint;
- (BOOL)_updateWaypointsIfNeeded:(id)a0;
- (void).cxx_destruct;

@end
