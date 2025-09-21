@class NSDictionary, TTRMUIPopUpButton;

@interface TTRMUIPopUpButtonCell : NSPopUpButtonCell

@property (nonatomic) BOOL useAlternateTitle;
@property (copy, nonatomic) NSDictionary *enabledTitleAttributes;
@property (copy, nonatomic) NSDictionary *disabledTitleAttributes;
@property (weak, nonatomic) TTRMUIPopUpButton *uiPopUpbutton;

- (id)attributedTitle;
- (id)titleFont;
- (id)textColor;
- (id)titleAttributes;
- (void).cxx_destruct;
- (void)_setMouseTrackingInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ofView:(id)a1;
- (id)lightTextColor;
- (id)currentTitleAttributesWithColor;

@end
