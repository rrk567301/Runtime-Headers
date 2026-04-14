@class FUFlightInfoView;

@interface FUFlightInfoViewController : NSViewController {
    FUFlightInfoView *_flight;
    unsigned long long _style;
}

- (id)initWithStyle:(unsigned long long)a0;
- (void)setStyle:(unsigned long long)a0;
- (BOOL)_canShowWhileLocked;
- (void)loadView;
- (void).cxx_destruct;
- (id)flightInfoView;

@end
