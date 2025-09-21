@protocol IIDatePickerPanelDelegate;

@interface IIDatePickerPanel : NSPanel

@property (weak) id<IIDatePickerPanelDelegate> panelDelegate;

- (void).cxx_destruct;
- (void)resignKeyWindow;
- (char)canBecomeKeyWindow;
- (char)hasKeyAppearance;
- (void)selectKeyViewFollowingView:(id)a0;
- (void)selectKeyViewPrecedingView:(id)a0;

@end
