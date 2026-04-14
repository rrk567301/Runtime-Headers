@class NSTextField, LUIClockSettings, NSDateFormatter;
@protocol LUIClockTimerHandle;

@interface LUI2TimeViewController : LUI2ViewController {
    NSDateFormatter *_timeFormatter;
    NSTextField *_timeTextField;
    id<LUIClockTimerHandle> _clockTimer;
    BOOL _paused;
}

@property id target;
@property SEL action;
@property (retain) LUIClockSettings *clockSettings;

- (void)mouseUp:(id)a0;
- (void)resume;
- (void)pause;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_formatterChanged:(id)a0;
- (void)_loadSymbols;
- (void)_scheduleClockTimer;
- (id)_timeFont;
- (void)_updateTimeFormatter;
- (void)_updateTimeTextField;

@end
