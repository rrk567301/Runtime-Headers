@class EKUICustomRepeatDescriptionField;

@interface EKUICustomRepeatDescriptionGadget : EKUIRepeatGadget

@property (retain) EKUICustomRepeatDescriptionField *repeatDescriptionField;

- (id)initWithViewController:(id)a0;
- (id)controlView;
- (void).cxx_destruct;
- (id)labelString;
- (id)control;
- (double)pixelsBetweenLabelAndControl;
- (BOOL)shouldDisplay;
- (BOOL)shouldDisplayWhenNotEditable;
- (void)updateWithChanges:(id)a0;

@end
