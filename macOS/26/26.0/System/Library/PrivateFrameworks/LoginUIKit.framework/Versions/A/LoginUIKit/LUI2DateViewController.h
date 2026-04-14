@class NSTextField, NSDateFormatter, NSView, LUIClockSettings, LUI2VibrancyEffectView;
@protocol LUIClockTimerHandle;

@interface LUI2DateViewController : LUI2ViewController {
    id<LUIClockTimerHandle> _clockTimer;
    NSDateFormatter *_dateFormatter;
    LUI2VibrancyEffectView *_vibrancyView;
}

@property (class, readonly) double fontSize;

@property (readonly) NSDateFormatter *dateFormatter;
@property (retain) NSTextField *dateTextField;
@property (retain) NSView *dateView;
@property (retain) LUIClockSettings *clockSettings;

- (void)_timerFired;
- (void)viewDidLoad;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_dateFont;
- (void)_displaysDidChange:(id)a0;
- (void)_startDayChangeTimer;
- (void)_updateAppearance:(id)a0;

@end
