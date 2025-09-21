@class MNArrivalUpdater, GEOComposedRoute, GEOComposedRouteLeg, _MNArrivalUpdaterDetails, MNLocation;

@interface _MNArrivalUpdaterState : NSObject

@property (weak, nonatomic) MNArrivalUpdater *arrivalUpdater;
@property (retain, nonatomic) _MNArrivalUpdaterDetails *details;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) MNLocation *location;
@property (readonly, nonatomic) GEOComposedRoute *route;
@property (readonly, nonatomic) GEOComposedRouteLeg *targetLeg;

- (void).cxx_destruct;
- (void)sendArrivalInfo;
- (char)_checkForApproachingWaypoint;
- (char)_checkForArrival;
- (char)_checkForEndOfDrivingSegment;
- (char)_checkForPreArrival;
- (double)_distanceToEndOfLeg;
- (char)_updateForApproachingWaypoint;
- (char)_updateForArrival;
- (void)_updateForEVMonitoring;
- (char)_updateForEndOfDrivingSegment;
- (char)_updateForPreArrival;
- (char)_updateForSearchingForParking;
- (void)forceDepartureWithReason:(unsigned long long)a0;
- (void)onEnterState:(id)a0;
- (void)onLeaveState:(id)a0;
- (double)parkingDetectionExcludeRadius;
- (void)updateForEVChargingState:(char)a0;
- (void)updateForEVReachedTargetBatteryCharge;
- (void)updateForLocation;
- (void)updateForResumeDriving;

@end
