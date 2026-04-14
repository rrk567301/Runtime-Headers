@interface EKUISingleViewGadget : EKUIGadget

@property BOOL hasAddedControlViewConstraints;

- (double)horizontalPadding;
- (void)updateConstraints;
- (double)verticalPadding;
- (id)control;
- (void)addSubviewsIfNeeded;

@end
