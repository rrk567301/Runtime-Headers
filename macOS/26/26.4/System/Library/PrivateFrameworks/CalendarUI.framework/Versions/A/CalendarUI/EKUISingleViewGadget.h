@interface EKUISingleViewGadget : EKUIGadget

@property BOOL hasAddedControlViewConstraints;

- (double)verticalPadding;
- (void)updateConstraints;
- (double)horizontalPadding;
- (id)control;
- (void)addSubviewsIfNeeded;

@end
