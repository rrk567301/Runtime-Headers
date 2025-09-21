@class NSButton;

@interface EKUILabeledCheckboxGadget : EKUILabeledGadget

@property (retain) NSButton *checkbox;

- (void).cxx_destruct;
- (double)baselineOffset;
- (char)isChecked;
- (id)labelString;
- (id)control;
- (id)initWithViewController:(id)a0;
- (void)checkboxToggled;
- (char)canBeChecked;
- (double)centerlineOffset;
- (double)pixelsBetweenLabelAndControl;
- (void)updateEvent;
- (void)updateWithChanges:(id)a0;

@end
