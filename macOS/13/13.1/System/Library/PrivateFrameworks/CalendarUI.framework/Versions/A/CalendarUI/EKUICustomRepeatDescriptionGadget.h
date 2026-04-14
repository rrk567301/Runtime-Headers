@class EKUICustomRepeatDescriptionField;

@interface EKUICustomRepeatDescriptionGadget : EKUIRepeatGadget

@property (retain) EKUICustomRepeatDescriptionField *repeatDescriptionField;

- (void).cxx_destruct;
- (id)controlView;
- (id)initWithViewController:(id)a0;
- (id)labelString;
- (id)control;
- (BOOL)shouldDisplay;
- (void)updateWithChanges:(id)a0;
- (double)pixelsBetweenLabelAndControl;
- (BOOL)shouldDisplayWhenNotEditable;

@end
