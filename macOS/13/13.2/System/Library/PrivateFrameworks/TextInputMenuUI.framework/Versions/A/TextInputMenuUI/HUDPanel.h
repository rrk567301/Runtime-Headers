@class NSTimer;

@interface HUDPanel : NSPanel

@property (retain, nonatomic) NSTimer *orderOutWatchdogTimer;
@property BOOL isEventCaptureOurs;
@property BOOL ignoreNextFlagChangedEvent;
@property (nonatomic) struct CGPoint { double x; double y; } globalMousePositionOnOpeningPanel;

- (void)dealloc;
- (void)_updateBackground;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (BOOL)canBecomeKeyWindow;
- (void)windowDidResize:(id)a0;
- (void)resignKeyWindow;
- (void)orderFront:(id)a0;
- (void)orderOut:(id)a0;
- (void)flagsChanged:(id)a0;
- (void)orderOutImmediately:(id)a0;
- (id)_backgroundColorPatternImage;
- (void)showInputsPanel:(unsigned long long)a0;
- (void)changeSelection;
- (void)changeInputToSelection;
- (void)resetOrderOutWatchdogTimer;

@end
