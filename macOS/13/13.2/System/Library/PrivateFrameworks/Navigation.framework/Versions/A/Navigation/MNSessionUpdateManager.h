@class NSTimer, NSString, GEODataRequestThrottlerToken, NSDate, NSError, NSMutableDictionary, GEOApplicationAuditToken, GEOTransitRouteUpdater, GEOLatLng, GEOETATrafficUpdateRequest, GEOComposedETARoute;
@protocol MNSessionUpdateManagerDelegate;

@interface MNSessionUpdateManager : NSObject <GEOTransitRouteUpdaterDelegate> {
    GEOTransitRouteUpdater *_transitUpdater;
    NSMutableDictionary *_subscribers;
    NSTimer *_etaTimer;
    double _etaRequestInterval;
    double _initialRequestDelay;
    double _opportunisticRequestTimeWindow;
    NSDate *_dateOfLastUpdate;
    BOOL _lastRequestWasServerDriven;
    BOOL _isPaused;
    GEOETATrafficUpdateRequest *_pendingETARequest;
    GEOComposedETARoute *_pendingETARoute;
    NSError *_retryError;
}

@property (weak, nonatomic) id<MNSessionUpdateManagerDelegate> delegate;
@property (copy, nonatomic) NSString *requestingAppIdentifier;
@property (retain, nonatomic) GEOApplicationAuditToken *auditToken;
@property (retain, nonatomic) GEODataRequestThrottlerToken *throttleToken;
@property (nonatomic) unsigned long long maxAlternateRoutesCount;
@property (retain, nonatomic) GEOLatLng *tripOrigin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)transitRouteUpdater:(id)a0 willSendRequests:(id)a1;
- (void)transitRouteUpdater:(id)a0 willUpdateTransitForRouteIDs:(id)a1;
- (void)transitRouteUpdater:(id)a0 didFailUpdateForRouteIDs:(id)a1 withError:(id)a2;
- (void)transitRouteUpdater:(id)a0 didReceiveResponse:(id)a1;
- (void)transitRouteUpdater:(id)a0 didUpdateTransitRoutes:(id)a1;
- (void)stopUpdateRequests;
- (void)startUpdateRequestsForRoutes:(id)a0 andNavigationType:(long long)a1;
- (id)_serverDisplayETAForResponseInfo:(id)a0;
- (void)restartUpdateTimer;
- (void)requestImmediateUpdate;
- (void)requestUpdateForETAUPosition:(id)a0;
- (void)pauseUpdateRequestsForSubscriber:(id)a0;
- (void)resumeUpdateRequestsForSubscriber:(id)a0;
- (void)_scheduleETATimerWithInterval:(double)a0;
- (void)_continueETARequests;
- (void)_terminateETARequests;
- (void)_cancelPendingETARequest;
- (void)_updateRouteAttributesFor:(id)a0 route:(id)a1 updatedLocation:(id)a2 completion:(id /* block */)a3;
- (void)_sendETARequest;
- (void)_sendETARequestWithRouteAttributes:(id)a0;
- (id)_baseETARequest;
- (id)_updateETARequest:(id)a0 withRouteInfo:(id)a1 andUserLocation:(id)a2;
- (id)_updateWaypointsForRequest:(id)a0 routeInfo:(id)a1 userLocation:(id)a2 etaRoute:(id)a3;
- (void)_handleETAResponse:(id)a0 forRouteInfo:(id)a1 etaRoute:(id)a2;
- (BOOL)_hasAtLeastOneActiveSubscriber;

@end
