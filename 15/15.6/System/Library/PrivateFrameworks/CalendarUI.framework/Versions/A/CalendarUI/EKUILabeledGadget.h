@class NSView, NSTextField;

@interface EKUILabeledGadget : EKUIGadget {
    NSView *_controlView;
}

@property (retain) NSTextField *label;
@property char hasAddedControlViewConstraints;

- (void).cxx_destruct;
- (double)baselineOffset;
- (id)controlView;
- (double)preferredWidth;
- (void)updateConstraints;
- (id)labelString;
- (id)control;
- (id)initWithViewController:(id)a0;
- (void)addSubviewsIfNeeded;
- (double)centerlineOffset;
- (id)getAlignmentLabelAndAddToSubviewsIfNeeded;
- (double)pixelsBetweenLabelAndControl;
- (double)preferredControlWidth;
- (double)rightLabelAlignmentOffset;
- (char)shouldDisplay;
- (char)shouldDisplayWhenNotEditable;
- (id)viewForBaselineAlignment;

@end
