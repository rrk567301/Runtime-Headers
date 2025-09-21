@interface PKPaymentSetupFieldBuiltInCardOnFilePrimaryAccountNumber : PKPaymentSetupFieldText

- (char)isBuiltIn;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (id)displayFormatPaddingCharacters;
- (char)hasDisplayFormat;
- (id)stringByApplyingDisplayFormat:(id)a0;

@end
