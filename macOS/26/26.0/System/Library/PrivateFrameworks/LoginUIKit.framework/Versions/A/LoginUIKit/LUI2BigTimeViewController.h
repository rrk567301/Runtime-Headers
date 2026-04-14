@class _TtC10LoginUIKit17LUI2GlassTextView, NSTextField, NSView, LUIClockSettings, NSDateFormatter, LUI2VibrancyEffectView;
@protocol LUIClockTimerHandle;

@interface LUI2BigTimeViewController : LUI2ViewController {
    NSDateFormatter *_formatter;
    LUI2VibrancyEffectView *_vibrancyView;
    id<LUIClockTimerHandle> _clockTimer;
}

@property (retain) NSTextField *timeTextField;
@property (retain) _TtC10LoginUIKit17LUI2GlassTextView *glassTextView;
@property (retain) NSView *timeView;
@property id target;
@property SEL action;
@property (retain) LUIClockSettings *clockSettings;

- (void)mouseUp:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_displaysDidChange:(id)a0;
- (double)_fontSize;
- (id)_timeFont;
- (void)_updateAppearance:(id)a0;
- (void)_updateGlassTextViewFont;
- (void)_updateTime;
- (void)_updateTimeFormatter;

@end
