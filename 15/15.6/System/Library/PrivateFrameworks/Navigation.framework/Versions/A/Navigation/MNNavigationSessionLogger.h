@class NSHashTable, NSString, NSUUID, NSArray, NSError, MNNavigationSessionState, NSMutableDictionary;

@interface MNNavigationSessionLogger : NSObject <MNNavigationSessionObserver, MNNavigationSessionStateListener> {
    NSUUID *_lastGuidanceSignID;
    NSArray *_lastARInfos;
    NSError *_previousSuppressedRerouteError;
    NSMutableDictionary *_displayETALookup;
    NSHashTable *_activeCameraInfos;
}

@property (copy, nonatomic) MNNavigationSessionState *navigationSessionState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_stringForLocationType:(unsigned long long)a0;
- (void)_updateCameraStyleAttributesForLocation:(id)a0;
- (void)navigationSession:(id)a0 didArriveAtWaypoint:(id)a1 endOfLegIndex:(unsigned long long)a2;
- (void)navigationSession:(id)a0 didChangeNavigationState:(int)a1;
- (void)navigationSession:(id)a0 didEnterPreArrivalStateForWaypoint:(id)a1 endOfLegIndex:(unsigned long long)a2;
- (void)navigationSession:(id)a0 didFailRerouteWithError:(id)a1;
- (void)navigationSession:(id)a0 didInsertWaypoint:(id)a1;
- (void)navigationSession:(id)a0 didReceiveTrafficIncidentAlert:(id)a1 responseCallback:(id /* block */)a2;
- (void)navigationSession:(id)a0 didRemoveWaypoint:(id)a1;
- (void)navigationSession:(id)a0 didReroute:(id)a1 withLocation:(id)a2 withAlternateRoutes:(id)a3 rerouteReason:(unsigned long long)a4;
- (void)navigationSession:(id)a0 didRerouteWithWaypoints:(id)a1;
- (void)navigationSession:(id)a0 didResumeNavigatingFromWaypoint:(id)a1 endOfLegIndex:(unsigned long long)a2 reason:(unsigned long long)a3;
- (void)navigationSession:(id)a0 didSendNavigationServiceCallback:(id)a1;
- (void)navigationSession:(id)a0 didStartWithRoute:(id)a1 navigationType:(long long)a2 isResumingMultipointRoute:(char)a3 isReconnecting:(char)a4;
- (void)navigationSession:(id)a0 didSuppressReroute:(id)a1;
- (void)navigationSession:(id)a0 didSwitchToNewTransportType:(int)a1 newRoute:(id)a2 rerouteReason:(unsigned long long)a3;
- (void)navigationSession:(id)a0 didUpdateAlternateRoutes:(id)a1;
- (void)navigationSession:(id)a0 didUpdateDestination:(id)a1;
- (void)navigationSession:(id)a0 didUpdateDisplayETA:(id)a1 remainingDistance:(id)a2 batteryChargeInfo:(id)a3;
- (void)navigationSession:(id)a0 didUpdateETAResponseForRoute:(id)a1;
- (void)navigationSession:(id)a0 didUpdateMatchedLocation:(id)a1;
- (void)navigationSession:(id)a0 didUpdateTargetLegIndex:(unsigned long long)a1;
- (void)navigationSession:(id)a0 matchedToStepIndex:(unsigned long long)a1 segmentIndex:(unsigned long long)a2;
- (void)navigationSession:(id)a0 updateSignsWithARInfo:(id)a1;
- (void)navigationSession:(id)a0 updateSignsWithInfo:(id)a1;
- (void)navigationSessionDidArrive:(id)a0;
- (void)navigationSessionDidCancelReroute:(id)a0;
- (void)navigationSessionDidEnterPreArrivalState:(id)a0;
- (void)navigationSessionWillReroute:(id)a0;

@end
