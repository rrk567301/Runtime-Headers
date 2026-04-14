@class FUFlightInfoView;

@interface FUFlightInfoViewController : NSViewController {
    FUFlightInfoView *_flight;
    unsigned long long _style;
}

- (void)setStyle:(unsigned long long)a0;
- (BOOL)_canShowWhileLocked;
- (id)initWithStyle:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)loadView;
- (id)flightInfoView;

@end
