@class EKUICalendarPopUpButton;

@interface EKUICalendarPopUpButtonCell : EKUIPopUpButtonCell

@property (weak) EKUICalendarPopUpButton *uiButton;

- (void).cxx_destruct;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (id)titleFont;
- (void)drawTitleWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)drawTitle:(id)a0 inFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 deemphasizedString:(id)a2 inView:(id)a3;

@end
