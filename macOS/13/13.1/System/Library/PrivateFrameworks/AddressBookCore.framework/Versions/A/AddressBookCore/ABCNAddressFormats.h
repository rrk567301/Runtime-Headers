@interface ABCNAddressFormats : NSObject

+ (id)defaultCountryCode;
+ (id)addressFormats;
+ (void)setDefaultCountryCode:(id)a0;
+ (id)validCountryCodes;
+ (id)makeFormatsDictionary;
+ (id)addressFormatForCountryCode:(id)a0;
+ (void)setDefaultCountryCode:(id)a0 inDefaults:(id)a1;
+ (id)defaultCountryCodeFromDefaults:(id)a0;
+ (BOOL)wasCountryCodeChosenByUserInDefaults:(id)a0;
+ (id)countryCodeFromDefaults:(id)a0;
+ (id)countryCodeByLocaleLookup;
+ (id)countryCodeByGlobalDefaultsLookup;
+ (id)fallbackCountryCode;
+ (id)usaStateNames;
+ (id)usaStateAbbreviations;

@end
