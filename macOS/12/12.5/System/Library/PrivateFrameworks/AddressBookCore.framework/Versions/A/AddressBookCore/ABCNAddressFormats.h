@interface ABCNAddressFormats : NSObject

+ (id)defaultCountryCode;
+ (id)addressFormats;
+ (void)setDefaultCountryCode:(id)a0;
+ (id)validCountryCodes;
+ (id)usaStateAbbreviations;
+ (id)usaStateNames;
+ (id)makeFormatsDictionary;
+ (void)setDefaultCountryCode:(id)a0 inDefaults:(id)a1;
+ (id)addressFormatForCountryCode:(id)a0;
+ (id)defaultCountryCodeFromDefaults:(id)a0;
+ (id)countryCodeFromDefaults:(id)a0;
+ (id)countryCodeByLocaleLookup;
+ (BOOL)wasCountryCodeChosenByUserInDefaults:(id)a0;
+ (id)fallbackCountryCode;
+ (id)countryCodeByGlobalDefaultsLookup;

@end
