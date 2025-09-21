@class NSTimer, MNDepartureUpdater;

@interface _MNArrivalUpdaterState_Arrived : _MNArrivalUpdaterState {
    MNDepartureUpdater *_departureUpdater;
    NSTimer *_departureTimer;
}

- (void)dealloc;
- (void).cxx_destruct;
- (long long)state;
- (char)_checkForDeparture;
- (char)_updateForDeparture;
- (void)onEnterState:(id)a0;
- (double)parkingDetectionExcludeRadius;
- (void)updateForEVChargingState:(char)a0;
- (void)updateForEVReachedTargetBatteryCharge;
- (void)updateForLocation;

@end
