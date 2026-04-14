@class EKUICalendarPopUpButton;

@interface EKUICalendarPopUpButtonCell : EKUIPopUpButtonCell

@property (weak) EKUICalendarPopUpButton *uiButton;
@property BOOL isTruncated;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)titleFont;
- (unsigned long long)arrowPosition;

@end
