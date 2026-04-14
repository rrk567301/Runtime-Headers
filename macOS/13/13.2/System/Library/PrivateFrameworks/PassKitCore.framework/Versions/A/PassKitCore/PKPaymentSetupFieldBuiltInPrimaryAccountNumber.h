@interface PKPaymentSetupFieldBuiltInPrimaryAccountNumber : PKPaymentSetupFieldText

- (BOOL)isBuiltIn;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (id)compactLocalizedDisplayName;
- (BOOL)hasDisplayFormat;
- (id)stringByApplyingDisplayFormat:(id)a0;
- (id)displayFormatPaddingCharacters;

@end
