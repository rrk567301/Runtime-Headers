@interface _MNArrivalUpdaterState_None : _MNArrivalUpdaterState {
    unsigned long long _departureReason;
}

- (long long)state;
- (id)init;
- (id)initWithDepartureReason:(unsigned long long)a0;
- (void)onEnterState:(id)a0;
- (void)updateForLocation;

@end
