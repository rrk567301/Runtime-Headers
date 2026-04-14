@interface EKUISingleViewGadget : EKUIGadget

@property BOOL hasAddedControlViewConstraints;

- (double)bottomPadding;
- (void)updateConstraints;
- (id)control;
- (double)horizontalPadding;
- (void)addSubviewsIfNeeded;

@end
