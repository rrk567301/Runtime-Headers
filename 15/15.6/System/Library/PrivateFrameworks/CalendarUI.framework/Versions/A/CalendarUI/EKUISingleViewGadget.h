@interface EKUISingleViewGadget : EKUIGadget

@property char hasAddedControlViewConstraints;

- (double)bottomPadding;
- (void)updateConstraints;
- (id)control;
- (void)addSubviewsIfNeeded;
- (double)horizontalPadding;

@end
