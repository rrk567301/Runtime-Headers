@class NSArray, PKPaymentSetupFieldPickerItem, NSString;

@interface PKPaymentSetupFieldPicker : PKPaymentSetupField

@property (copy, nonatomic) NSArray *pickerItems;
@property (nonatomic) unsigned long long pickerType;
@property (copy, nonatomic) PKPaymentSetupFieldPickerItem *currentValue;
@property (copy, nonatomic) NSString *localizedDescription;

- (void).cxx_destruct;
- (id)currentValue;
- (void)setCurrentValue:(id)a0;
- (unsigned long long)fieldType;
- (id)displayString;
- (void)updateWithConfiguration:(id)a0;
- (id)_submissionStringForValue:(id)a0;
- (BOOL)submissionStringMeetsAllRequirements;
- (void)_commonUpdate;

@end
