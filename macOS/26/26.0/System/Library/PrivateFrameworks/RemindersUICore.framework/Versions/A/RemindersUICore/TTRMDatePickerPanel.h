@protocol TTRMDatePickerPanelDelegate;

@interface TTRMDatePickerPanel : NSPanel

@property (weak) id<TTRMDatePickerPanelDelegate> panelDelegate;

- (BOOL)canBecomeKeyWindow;
- (void).cxx_destruct;
- (void)resignKeyWindow;
- (BOOL)hasKeyAppearance;
- (void)selectKeyViewFollowingView:(id)a0;
- (void)selectKeyViewPrecedingView:(id)a0;

@end
