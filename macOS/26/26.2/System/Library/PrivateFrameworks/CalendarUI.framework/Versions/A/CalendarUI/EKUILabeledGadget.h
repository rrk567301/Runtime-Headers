@class NSView, NSTextField;

@interface EKUILabeledGadget : EKUIGadget {
    NSView *_controlView;
}

@property (retain) NSTextField *label;
@property BOOL hasAddedControlViewConstraints;

- (id)controlView;
- (id)initWithViewController:(id)a0;
- (double)baselineOffset;
- (void).cxx_destruct;
- (void)updateConstraints;
- (double)preferredWidth;
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
