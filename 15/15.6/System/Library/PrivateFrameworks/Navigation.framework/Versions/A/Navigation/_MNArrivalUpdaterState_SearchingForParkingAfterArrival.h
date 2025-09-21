@interface _MNArrivalUpdaterState_SearchingForParkingAfterArrival : _MNArrivalUpdaterState

- (long long)state;
- (char)_checkForArrival;
- (void)onEnterState:(id)a0;
- (void)updateForLocation;

@end
