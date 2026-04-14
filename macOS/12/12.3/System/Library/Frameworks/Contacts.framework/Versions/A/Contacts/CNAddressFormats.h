@interface CNAddressFormats : NSObject

+ (id)addressFormats;
+ (id)usaStateAbbreviations;
+ (id)usaStateNames;
+ (id)addressFormatForCountryCode:(id)a0;
+ (id)countryCodeByLocaleLookup;
+ (id)fallbackCountryCode;
+ (id)countryCodeByGlobalDefaultsLookup;
+ (id)supportedCountries;
+ (id)makeSupportedCountries;
+ (id)defaultKeyboardSettingsDictionary;

@end
