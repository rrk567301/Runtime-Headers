@class NSView, NSTextField;

@interface EKUILabeledGadget : EKUIGadget {
    NSView *_controlView;
}

@property (retain) NSTextField *label;
@property BOOL hasAddedControlViewConstraints;

- (void).cxx_destruct;
- (double)baselineOffset;
- (double)preferredWidth;
- (id)controlView;
- (void)updateConstraints;
- (id)initWithViewController:(id)a0;
- (id)labelString;
- (id)control;
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
