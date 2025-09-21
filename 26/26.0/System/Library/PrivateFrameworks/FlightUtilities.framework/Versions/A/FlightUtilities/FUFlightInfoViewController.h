@class FUFlightInfoView;

@interface FUFlightInfoViewController : NSViewController {
    FUFlightInfoView *_flight;
    unsigned long long _style;
}

- (id)initWithStyle:(unsigned long long)a0;
- (void)loadView;
- (BOOL)_canShowWhileLocked;
- (void)setStyle:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)flightInfoView;

@end
