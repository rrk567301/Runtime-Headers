@interface AAFPhoneNumberFormatter : NSObject

@property (nonatomic, retain) const struct __CFString { } *defaultCountryCode;

- (id)init;
- (void).cxx_destruct;
- (id)displayFormatFor:(id)a0;
- (id)normalizedFormatFor:(id)a0;
- (id)countryCodePrefixedNormalizedFormatFor:(id)a0 countryCode:(id)a1;

@end
