@class EKUIPopUpButton;

@interface EKUIRepeatPickerGadget : EKUIRepeatGadget

@property (retain) EKUIPopUpButton *repeatPicker;

- (void).cxx_destruct;
- (id)initWithViewController:(id)a0;
- (id)labelString;
- (id)control;
- (void)updateWithChanges:(id)a0;
- (void)repeatChanged:(id)a0;
- (id)addMenuItemForRecurrenceFrequency:(long long)a0 withTitle:(id)a1;

@end
