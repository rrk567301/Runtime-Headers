@class NSButton;

@interface EKUILabeledCheckboxGadget : EKUILabeledGadget

@property (retain) NSButton *checkbox;

- (id)initWithViewController:(id)a0;
- (double)baselineOffset;
- (void).cxx_destruct;
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
