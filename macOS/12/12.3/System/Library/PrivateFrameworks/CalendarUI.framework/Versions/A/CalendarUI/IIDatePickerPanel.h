@protocol IIDatePickerPanelDelegate;

@interface IIDatePickerPanel : NSPanel

@property (weak) id<IIDatePickerPanelDelegate> panelDelegate;

- (void).cxx_destruct;
- (BOOL)canBecomeKeyWindow;
- (BOOL)hasKeyAppearance;
- (void)resignKeyWindow;
- (void)selectKeyViewPrecedingView:(id)a0;
- (void)selectKeyViewFollowingView:(id)a0;

@end
