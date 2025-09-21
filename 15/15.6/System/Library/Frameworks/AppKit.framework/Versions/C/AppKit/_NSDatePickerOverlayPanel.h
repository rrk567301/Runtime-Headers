@protocol _NSDatePickerOverlayPanelDelegate;

@interface _NSDatePickerOverlayPanel : NSPanel

@property (retain) id _closeEventMonitor;
@property (setter=_setPanelDelegate:) id<_NSDatePickerOverlayPanelDelegate> _panelDelegate;

- (void)dealloc;
- (void)resignKeyWindow;
- (void)_setVisible:(char)a0;
- (void)applicationDidResignActive:(id)a0;
- (char)canBecomeKeyWindow;
- (void)cancelOperation:(id)a0;
- (char)closePopoverIfNecessaryForEvent:(id)a0;
- (char)hasKeyAppearance;
- (void)keyDown:(id)a0;
- (void)selectKeyViewFollowingView:(id)a0;
- (void)selectKeyViewPrecedingView:(id)a0;

@end
