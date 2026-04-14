@class LUI2VibrancyEffectView, NSDateFormatter, NSTextField;
@protocol LUIClockTimerHandle;

@interface LUI2BigTimeViewController : LUI2ViewController {
    NSDateFormatter *_formatter;
    LUI2VibrancyEffectView *_vibrancyView;
    id<LUIClockTimerHandle> _clockTimer;
}

@property (retain) NSTextField *timeTextField;
@property id target;
@property SEL action;

- (void)dealloc;
- (void).cxx_destruct;
- (double)_fontSize;
- (void)mouseUp:(id)a0;
- (void)viewDidLoad;
- (void)_updateTime;
- (void)_displaysDidChange:(id)a0;
- (void)_formatterChanged:(id)a0;
- (id)_timeFont;
- (void)_updateTimeFormatter;

@end
