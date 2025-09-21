@class NSString;

@interface MMPhoneNumberFormatter : NSFormatter

@property (copy, nonatomic) NSString *countryCode;

+ (id)defaultCountryCode;
+ (id)availableCountryCodes;
+ (id)countryCodesFromPlist;

- (id)stringForObjectValue:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isPartialStringValid:(id *)a0 proposedSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 originalString:(id)a2 originalSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 errorDescription:(id *)a4;
- (id)init;
- (id)description;
- (BOOL)getObjectValue:(id *)a0 forString:(id)a1 errorDescription:(id *)a2;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)attributedStringForObjectValue:(id)a0 withDefaultAttributes:(id)a1;
- (BOOL)isPhoneNumberValid:(id)a0 withPreFix:(id)a1;
- (id)stringForObjectValue:(id)a0 withObfuscations:(BOOL)a1 obfuscatedLength:(long long)a2;

@end
