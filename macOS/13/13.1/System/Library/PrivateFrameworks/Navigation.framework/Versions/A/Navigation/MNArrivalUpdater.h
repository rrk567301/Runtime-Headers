@class NSTimer, NSString, MNObserverHashTable, MNLocation, GEOComposedRoute, MNDepartureUpdater, NSMutableArray, MNEVChargingStateMonitor;

@interface MNArrivalUpdater : NSObject <GEOPListStateCapturing, MNArrivalRegionTimerDelegate, MNEVChargingStateMonitorDelegate> {
    MNObserverHashTable *_safeDelegate;
    GEOComposedRoute *_route;
    MNLocation *_lastLocation;
    unsigned long long _arrivalLegIndex;
    NSMutableArray *_timeoutRegions;
    MNEVChargingStateMonitor *_evChargingStateMonitor;
    BOOL _isCharging;
    MNDepartureUpdater *_departureUpdater;
    NSTimer *_departureTimer;
    unsigned long long _approachingLegIndex;
    unsigned long long _stateCaptureHandle;
}

@property (nonatomic) BOOL isMonitoringWaypoint;
@property (nonatomic) unsigned long long arrivalState;
@property (readonly, nonatomic) BOOL isInPreArrivalRegion;
@property (nonatomic) BOOL isApproachingWaypoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (id)captureStatePlistWithHints:(struct os_state_hints_s { unsigned int x0; char *x1; unsigned int x2; unsigned int x3; } *)a0;
- (id)initWithRoute:(id)a0;
- (void)updateForLocation:(id)a0;
- (BOOL)allowDepartureForLocation:(id)a0;
- (void)arrivalRegionTimerDidFire:(id)a0;
- (void)evChargingStateMonitorShouldShowChargingInfo:(id)a0;
- (void)evChargingStateMonitor:(id)a0 didReachTargetBatteryCharge:(id)a1;
- (void)evChargingStateMonitor:(id)a0 didChangeChargingState:(BOOL)a1;
- (void)updateForRoute:(id)a0 reason:(unsigned long long)a1;
- (void)setIsCharging:(BOOL)a0 location:(id)a1;
- (void)forceDepartureForCurrentLeg:(unsigned long long)a0;
- (void)_updateForDepartureFromWaypointWithReason:(unsigned long long)a0;
- (BOOL)_checkApproachingWaypointAtLocation:(id)a0 threshold:(double)a1;
- (BOOL)_checkPreArrival:(id)a0 forLocation:(id)a1;
- (BOOL)_checkArrival:(id)a0 forLocation:(id)a1;
- (id)_timeoutRegionsForLeg:(unsigned long long)a0;
- (double)_distanceToEndOfLeg:(id)a0 fromLocation:(id)a1;
- (void)_setArrivalForLegIndex:(unsigned long long)a0;
- (void)_startMonitoringBatteryChargeForLegIndex:(unsigned long long)a0;

@end
