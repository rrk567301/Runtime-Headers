@class FUFlightInfoView;

@interface FUFlightInfoViewController : NSViewController {
    FUFlightInfoView *_flight;
    unsigned long long _style;
}

- (void).cxx_destruct;
- (void)setStyle:(unsigned long long)a0;
- (id)initWithStyle:(unsigned long long)a0;
- (void)loadView;
- (char)_canShowWhileLocked;
- (id)flightInfoView;

@end
