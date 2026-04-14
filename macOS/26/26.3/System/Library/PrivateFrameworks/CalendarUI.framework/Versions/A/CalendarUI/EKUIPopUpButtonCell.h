@class NSDictionary, EKViewController, EKUIPopUpButton;

@interface EKUIPopUpButtonCell : NSPopUpButtonCell

@property BOOL useAlternateTitle;
@property BOOL mouseOver;
@property (retain) NSDictionary *enabledTitleAttributes;
@property (retain) NSDictionary *disabledTitleAttributes;
@property (weak) EKViewController *viewController;
@property (weak) EKUIPopUpButton *uiPopUpbutton;

- (id)titleAttributes;
- (void)mouseExited:(id)a0;
- (void)mouseEntered:(id)a0;
- (id)attributedTitle;
- (id)titleFont;
- (void).cxx_destruct;
- (id)textColor;
- (void)_setMouseTrackingInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ofView:(id)a1;
- (id)lightTextColor;
- (id)currentTitleAttributesWithColor;

@end
