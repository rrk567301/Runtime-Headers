@class NSView, NSTextField;

@interface EKUILabeledGadget : EKUIGadget {
    NSView *_controlView;
}

@property (retain) NSTextField *label;
@property BOOL hasAddedControlViewConstraints;

- (double)baselineOffset;
- (double)preferredWidth;
- (id)initWithViewController:(id)a0;
- (id)controlView;
- (void)updateConstraints;
- (void).cxx_destruct;
- (id)labelString;
- (id)control;
- (void)setLabelString:(id)a0;
- (void)addSubviewsIfNeeded;
- (double)centerlineOffset;
- (double)controlVerticalPadding;
- (id)getAlignmentLabelAndAddToSubviewsIfNeeded;
- (double)pixelsBetweenLabelAndControl;
- (double)preferredControlWidth;
- (double)rightLabelAlignmentOffset;
- (BOOL)shouldDisplay;
- (BOOL)shouldDisplayWhenNotEditable;
- (id)viewForBaselineAlignment;

@end
