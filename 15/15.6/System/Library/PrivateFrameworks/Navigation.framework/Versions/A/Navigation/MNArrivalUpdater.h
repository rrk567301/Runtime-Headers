@class _MNArrivalUpdaterState, MNObserverHashTable, NSString, GEOComposedRoute, GEOComposedRouteLeg, _MNArrivalUpdaterDetails, NSMutableArray, MNEVChargingStateMonitor, MNParkedVehicleDetector, MNNavigationSessionState;

@interface MNArrivalUpdater : NSObject <GEOPListStateCapturing, MNArrivalRegionTimerDelegate, MNEVChargingStateMonitorDelegate, MNParkedVehicleDetectorDelegate, MNNavigationSessionStateListener> {
    _MNArrivalUpdaterState *_currentState;
    _MNArrivalUpdaterDetails *_details;
    NSMutableArray *_timeoutRegions;
    MNEVChargingStateMonitor *_evChargingStateMonitor;
    MNParkedVehicleDetector *_parkedVehicleDetector;
    unsigned long long _stateCaptureHandle;
}

@property (readonly, nonatomic) MNObserverHashTable *safeDelegate;
@property (readonly, nonatomic) GEOComposedRoute *route;
@property (readonly, nonatomic) GEOComposedRouteLeg *targetLeg;
@property (copy, nonatomic) MNNavigationSessionState *navigationSessionState;
@property (readonly, nonatomic) char isInPreArrivalRegion;
@property (readonly, nonatomic) char isApproachingWaypoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (void)start;
- (void)stop;
- (void)changeState:(id)a0;
- (id)captureStatePlistWithHints:(struct os_state_hints_s { unsigned int x0; char *x1; unsigned int x2; unsigned int x3; } *)a0;
- (char)_checkForParkingDetectionRegion;
- (void)_updateForParkingDetectionRegion;
- (void)_updateTimeoutRegions;
- (void)arrivalRegionTimerDidFire:(id)a0;
- (void)evChargingStateMonitor:(id)a0 didChangeChargingState:(char)a1;
- (void)evChargingStateMonitor:(id)a0 didReachTargetBatteryCharge:(id)a1;
- (void)evChargingStateMonitorShouldShowChargingInfo:(id)a0;
- (void)forceDepartureForCurrentLeg:(unsigned long long)a0;
- (void)parkedVehicleDetectorDidDetectParkedVehicle:(id)a0;
- (void)parkedVehicleDetectorDidDetectResumeDriving:(id)a0;
- (void)startMonitoringForEV;
- (void)stopMonitoringForEV;
- (void)updateForLocation:(id)a0;

@end
