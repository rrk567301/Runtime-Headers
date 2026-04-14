@class NSArray, PKPaymentSetupFieldPickerItem, NSString;

@interface PKPaymentSetupFieldPicker : PKPaymentSetupField

@property (copy, nonatomic) NSArray *pickerItems;
@property (nonatomic) unsigned long long pickerType;
@property (copy, nonatomic) PKPaymentSetupFieldPickerItem *currentValue;
@property (copy, nonatomic) NSString *localizedDescription;

+ (id)pickerItemMatchingValue:(id)a0 pickerItems:(id)a1;

- (void)setDefaultValue:(id)a0;
- (void)setCurrentValue:(id)a0;
- (void)updateWithConfiguration:(id)a0;
- (id)displayString;
- (id)currentValue;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)fieldType;
- (void)_commonUpdate;
- (id)_submissionStringForValue:(id)a0;
- (void)_updateCurrentValuePickerItem;
- (id)defaultPickerItem;
- (BOOL)submissionStringMeetsAllRequirements;

@end
