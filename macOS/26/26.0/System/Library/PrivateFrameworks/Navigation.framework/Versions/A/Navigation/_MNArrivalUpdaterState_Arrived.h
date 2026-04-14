@class MNDispatchTimer, MNDepartureUpdater;

@interface _MNArrivalUpdaterState_Arrived : _MNArrivalUpdaterState {
    MNDepartureUpdater *_departureUpdater;
    MNDispatchTimer *_departureTimer;
}

- (long long)state;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)_checkForDeparture;
- (BOOL)_updateForDeparture;
- (void)onEnterState:(id)a0;
- (double)parkingDetectionExcludeRadius;
- (void)updateForEVChargingState:(BOOL)a0;
- (void)updateForEVReachedTargetBatteryCharge;
- (void)updateForLocation;

@end
