@interface IMKPhoneNumberInputMethod : IMKAbstractInputMethod

+ (id)_countryCode:(id)a0;
+ (id)_areaCode:(id)a0;
+ (id)_centralOfficeCode:(id)a0;
+ (id)_lineNumber:(id)a0;

- (BOOL)tracksVerbatim;
- (BOOL)handleKeyPress:(id)a0 whileInKeyboardState:(id)a1;

@end
