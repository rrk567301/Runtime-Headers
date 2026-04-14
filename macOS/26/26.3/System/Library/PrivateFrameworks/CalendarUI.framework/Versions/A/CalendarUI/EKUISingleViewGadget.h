@interface EKUISingleViewGadget : EKUIGadget

@property BOOL hasAddedControlViewConstraints;

- (void)updateConstraints;
- (double)horizontalPadding;
- (double)verticalPadding;
- (id)control;
- (void)addSubviewsIfNeeded;

@end
