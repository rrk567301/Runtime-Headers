@interface PKPaymentPreferenceCard : PKPaymentPreference

@property (nonatomic) char supportsNullSelection;

- (id)errorsForPreference:(id)a0;
- (id)initWithTitle:(id)a0 preferences:(id)a1 selectedIndex:(unsigned long long)a2 readOnly:(char)a3;
- (void)setErrors:(id)a0 forPreference:(id)a1;
- (char)supportsDeletion;

@end
