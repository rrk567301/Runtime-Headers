@interface AAFPhoneNumberFormatter : NSObject

@property (nonatomic, retain) const struct __CFString { } *defaultCountryCode;

- (void).cxx_destruct;
- (id)init;
- (id)displayFormatFor:(id)a0;
- (id)normalizedFormatFor:(id)a0;
- (id)countryCodePrefixedNormalizedFormatFor:(id)a0 countryCode:(id)a1;

@end
