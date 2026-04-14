@class NSView, NSTextField;

@interface EKUILabeledGadget : EKUIGadget {
    NSView *_controlView;
}

@property (retain) NSTextField *label;
@property BOOL hasAddedControlViewConstraints;

- (void).cxx_destruct;
- (double)baselineOffset;
- (id)controlView;
- (id)initWithViewController:(id)a0;
- (double)preferredWidth;
- (void)updateConstraints;
- (id)labelString;
- (id)control;
- (void)addSubviewsIfNeeded;
- (double)centerlineOffset;
- (id)getAlignmentLabelAndAddToSubviewsIfNeeded;
- (double)pixelsBetweenLabelAndControl;
- (double)preferredControlWidth;
- (double)rightLabelAlignmentOffset;
- (BOOL)shouldDisplay;
- (BOOL)shouldDisplayWhenNotEditable;
- (id)viewForBaselineAlignment;

@end
