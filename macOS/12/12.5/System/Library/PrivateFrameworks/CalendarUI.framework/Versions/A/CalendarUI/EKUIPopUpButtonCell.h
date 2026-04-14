@class NSDictionary, EKViewController, EKUIPopUpButton;

@interface EKUIPopUpButtonCell : NSPopUpButtonCell

@property BOOL useAlternateTitle;
@property BOOL mouseOver;
@property (retain) NSDictionary *enabledTitleAttributes;
@property (retain) NSDictionary *disabledTitleAttributes;
@property (weak) EKViewController *viewController;
@property (weak) EKUIPopUpButton *uiPopUpbutton;

- (void).cxx_destruct;
- (id)attributedTitle;
- (void)_setMouseTrackingInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ofView:(id)a1;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)textColor;
- (id)titleFont;
- (void)drawImageWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)drawTitleWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (BOOL)usesItemFromMenu;
- (id)lightTextColor;
- (id)currentTitleAttributesWithColor;
- (id)titleAttributes;

@end
