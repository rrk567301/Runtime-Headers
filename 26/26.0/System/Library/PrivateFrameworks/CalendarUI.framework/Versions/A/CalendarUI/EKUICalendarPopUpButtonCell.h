@class EKUICalendarPopUpButton;

@interface EKUICalendarPopUpButtonCell : EKUIPopUpButtonCell

@property (weak) EKUICalendarPopUpButton *uiButton;
@property BOOL isTruncated;

- (id)titleFont;
- (void).cxx_destruct;
- (unsigned long long)arrowPosition;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
