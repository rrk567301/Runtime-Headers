@class PKDatePicker, NSString;

@interface PKPaymentSetupDateFieldView : PKPaymentSetupFieldView <PKDatePickerDelegate>

@property (retain) PKDatePicker *datePicker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (id)label;
- (double)firstBaselineOffsetFromTop;
- (void)datePicker:(id)a0 didChangeDate:(id)a1;
- (id)initWithSetupField:(id)a0;

@end
