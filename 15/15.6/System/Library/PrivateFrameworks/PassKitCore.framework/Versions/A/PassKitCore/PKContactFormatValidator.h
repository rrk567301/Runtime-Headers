@class PKContactFormatConfiguration;

@interface PKContactFormatValidator : NSObject {
    PKContactFormatConfiguration *_configuration;
}

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (unsigned long long)checkNameFormat:(id)a0 forCountryCode:(id)a1;
- (id)_formattedFieldEntry:(id)a0 forFieldConfiguration:(id)a1;
- (char)_isFieldEntry:(id)a0 validForContactFieldConfiguration:(id)a1;
- (char)_isFieldEntry:(id)a0 validForPickerContactFieldConfiguration:(id)a1;
- (char)_isFieldEntry:(id)a0 validForTextContactFieldConfiguration:(id)a1;
- (unsigned long long)checkPostalAddressFormat:(id)a0;
- (id)contactFieldConfigurationForFamilyNameForCountryCode:(id)a0;
- (id)contactFieldConfigurationForGivenNameForCountryCode:(id)a0;
- (id)contactFieldConfigurationForPhoneticFamilyNameForCountryCode:(id)a0;
- (id)contactFieldConfigurationForPhoneticGivenNameForCountryCode:(id)a0;
- (id)contactFieldConfigurationForPostalField:(id)a0 forCountryCode:(id)a1;
- (char)emailAddressIsValid:(id)a0;
- (id)formatPostalAddress:(id)a0;
- (char)hasFormatValidationConfigurationForCountryCode:(id)a0;
- (char)isFamilyName:(id)a0 validFormatForCountryCode:(id)a1;
- (char)isGivenName:(id)a0 validFormatForCountryCode:(id)a1;
- (char)isPhoneticFamilyName:(id)a0 validFormatForCountryCode:(id)a1;
- (char)isPhoneticGivenName:(id)a0 validFormatForCountryCode:(id)a1;
- (char)isPostalAddressFieldEntry:(id)a0 validForPostalFieldKey:(id)a1 forCountryCode:(id)a2;
- (char)phoneNumberIsValid:(id)a0 forCountryCode:(id)a1;

@end
