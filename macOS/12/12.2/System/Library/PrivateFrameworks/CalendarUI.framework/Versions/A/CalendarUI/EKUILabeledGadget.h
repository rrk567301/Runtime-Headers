@class NSView, NSTextField;

@interface EKUILabeledGadget : EKUIGadget {
    NSView *_controlView;
}

@property (retain) NSTextField *label;
@property BOOL hasAddedControlViewConstraints;

- (void).cxx_destruct;
- (double)preferredWidth;
- (id)controlView;
- (void)updateConstraints;
- (double)baselineOffset;
- (id)labelString;
- (id)control;
- (id)initWithViewController:(id)a0;
- (BOOL)shouldDisplay;
- (id)getAlignmentLabelAndAddToSubviewsIfNeeded;
- (double)pixelsBetweenLabelAndControl;
- (BOOL)shouldDisplayWhenNotEditable;
- (id)viewForBaselineAlignment;
- (double)preferredControlWidth;
- (double)centerlineOffset;
- (void)addSubviewsIfNeeded;
- (double)rightLabelAlignmentOffset;

@end
