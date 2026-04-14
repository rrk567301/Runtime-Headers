@protocol IIDatePickerPanelDelegate;

@interface IIDatePickerPanel : NSPanel

@property (weak) id<IIDatePickerPanelDelegate> panelDelegate;

- (void).cxx_destruct;
- (BOOL)canBecomeKeyWindow;
- (void)resignKeyWindow;
- (BOOL)hasKeyAppearance;
- (void)selectKeyViewFollowingView:(id)a0;
- (void)selectKeyViewPrecedingView:(id)a0;

@end
