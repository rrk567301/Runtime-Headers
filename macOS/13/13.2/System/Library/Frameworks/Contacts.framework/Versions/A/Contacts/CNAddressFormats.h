@interface CNAddressFormats : NSObject

+ (id)addressFormats;
+ (id)addressFormatForCountryCode:(id)a0;
+ (id)countryCodeByLocaleLookup;
+ (id)countryCodeByGlobalDefaultsLookup;
+ (id)fallbackCountryCode;
+ (id)usaStateNames;
+ (id)usaStateAbbreviations;
+ (id)supportedCountries;
+ (id)makeSupportedCountries;
+ (id)defaultKeyboardSettingsDictionary;

@end
