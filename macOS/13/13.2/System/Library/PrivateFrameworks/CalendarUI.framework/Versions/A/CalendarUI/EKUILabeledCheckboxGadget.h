@class NSButton;

@interface EKUILabeledCheckboxGadget : EKUILabeledGadget

@property (retain) NSButton *checkbox;

- (void).cxx_destruct;
- (double)baselineOffset;
- (id)initWithViewController:(id)a0;
- (BOOL)isChecked;
- (id)labelString;
- (id)control;
- (void)updateWithChanges:(id)a0;
- (double)pixelsBetweenLabelAndControl;
- (void)updateEvent;
- (BOOL)canBeChecked;
- (void)checkboxToggled;
- (double)centerlineOffset;

@end
