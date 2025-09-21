@class GEOPerformanceEventLogger, NSString, NSMutableSet, GEONavdPeer, NSObject, _TtC11GeoServices28GEONavigationListenerDetails;
@protocol OS_dispatch_queue;

@interface GEONavigationServer : NSObject <GeoServices.GEONavigationListener_ServerReceivesNavigationUpdates_Interface> {
    _TtC11GeoServices28GEONavigationListenerDetails *_details;
    NSObject<OS_dispatch_queue> *_queue;
    GEONavdPeer *_pushStatePeer;
    NSMutableSet *_remoteClients;
    NSMutableSet *_unEntitledClients;
    BOOL _isListenerConnectionOpen;
    int _listenerConnectionOpenToken;
    GEOPerformanceEventLogger *_performanceEventLogger;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPositionFromSign:(struct { double x0; double x1; })a0;
- (void)setLocation:(id)a0 routeCoordinate:(struct { unsigned int x0; float x1; })a1;
- (void)setRoute:(id)a0;
- (void)setPositionFromDestination:(struct { double x0; double x1; })a0;
- (void)setRouteSummary:(id)a0;
- (void)setResumedNavigatingFromWaypoint:(id)a0 endOfLegIndex:(long long)a1;
- (void)setNavigationSessionState:(unsigned long long)a0 transportType:(int)a1 isResumingMultipointRoute:(BOOL)a2;
- (void)setNavigationVoiceVolume:(int)a0;
- (void)setStepIndex:(long long)a0;
- (void)setETAUpdate:(id)a0;
- (id)init;
- (void)setTransitRouteSummary:(id)a0;
- (void)setGuidanceState:(id)a0;
- (void)setArrivedAtWaypoint:(id)a0 endOfLegIndex:(long long)a1;
- (void)setStepNameInfo:(id)a0;
- (void)setTrafficForCurrentRoute:(id)a0;
- (void)setCurrentRoadName:(id)a0;
- (void)setPositionFromManeuver:(struct { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)_addClientForConnection:(id)a0;
- (void)_closePushStatePeerConnection;
- (void)_forEachValidClientOnIsolationQueue:(id /* block */)a0;
- (void)_notifyListenersOpenConnection;
- (void)_openPushStatePeerConnection:(id)a0;
- (void)setETARoute:(id)a0;

@end
