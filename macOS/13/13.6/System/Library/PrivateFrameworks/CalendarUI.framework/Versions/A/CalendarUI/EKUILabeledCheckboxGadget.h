@class NSButton;

@interface EKUILabeledCheckboxGadget : EKUILabeledGadget

@property (retain) NSButton *checkbox;

- (void).cxx_destruct;
- (double)baselineOffset;
- (id)initWithViewController:(id)a0;
- (BOOL)isChecked;
- (id)labelString;
- (id)control;
- (void)checkboxToggled;
- (BOOL)canBeChecked;
- (double)centerlineOffset;
- (double)pixelsBetweenLabelAndControl;
- (void)updateEvent;
- (void)updateWithChanges:(id)a0;

@end
