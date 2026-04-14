@protocol _NSDatePickerOverlayPanelDelegate;

@interface _NSDatePickerOverlayPanel : NSPanel

@property (retain) id _closeEventMonitor;
@property (setter=_setPanelDelegate:) id<_NSDatePickerOverlayPanelDelegate> _panelDelegate;

- (void)dealloc;
- (BOOL)canBecomeKeyWindow;
- (void)applicationDidResignActive:(id)a0;
- (void)keyDown:(id)a0;
- (void)resignKeyWindow;
- (void)cancelOperation:(id)a0;
- (BOOL)hasKeyAppearance;
- (void)_setVisible:(BOOL)a0;
- (BOOL)closePopoverIfNecessaryForEvent:(id)a0;
- (void)selectKeyViewFollowingView:(id)a0;
- (void)selectKeyViewPrecedingView:(id)a0;

@end
