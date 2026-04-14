@protocol _NSDatePickerOverlayPanelDelegate;

@interface _NSDatePickerOverlayPanel : NSPanel

@property (retain) id _closeEventMonitor;
@property (setter=_setPanelDelegate:) id<_NSDatePickerOverlayPanelDelegate> _panelDelegate;

- (void)cancelOperation:(id)a0;
- (void)dealloc;
- (void)keyDown:(id)a0;
- (BOOL)canBecomeKeyWindow;
- (void)resignKeyWindow;
- (void)_setVisible:(BOOL)a0;
- (void)applicationDidResignActive:(id)a0;
- (BOOL)closePopoverIfNecessaryForEvent:(id)a0;
- (BOOL)hasKeyAppearance;
- (void)selectKeyViewFollowingView:(id)a0;
- (void)selectKeyViewPrecedingView:(id)a0;

@end
