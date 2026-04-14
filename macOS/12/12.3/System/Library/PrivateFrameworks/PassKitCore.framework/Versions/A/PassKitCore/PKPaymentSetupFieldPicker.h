@class NSArray, PKPaymentSetupFieldPickerItem;

@interface PKPaymentSetupFieldPicker : PKPaymentSetupField

@property (copy, nonatomic) NSArray *pickerItems;
@property (copy, nonatomic) PKPaymentSetupFieldPickerItem *currentValue;

- (void).cxx_destruct;
- (void)setCurrentValue:(id)a0;
- (id)currentValue;
- (id)displayString;
- (void)updateWithConfiguration:(id)a0;
- (unsigned long long)fieldType;
- (id)_submissionStringForValue:(id)a0;
- (BOOL)submissionStringMeetsAllRequirements;
- (void)_commonUpdate;

@end
