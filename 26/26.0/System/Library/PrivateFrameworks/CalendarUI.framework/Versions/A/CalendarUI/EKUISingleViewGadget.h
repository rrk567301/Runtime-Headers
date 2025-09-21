@interface EKUISingleViewGadget : EKUIGadget

@property BOOL hasAddedControlViewConstraints;

- (double)verticalPadding;
- (double)horizontalPadding;
- (void)updateConstraints;
- (id)control;
- (void)addSubviewsIfNeeded;

@end
