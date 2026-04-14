@interface CNPhoneNumberHelper : NSObject

+ (id)countryCodeForNumber:(id)a0;
+ (id)defaultCountryCode;
+ (id)makePhoneNumberRegex;
+ (id)lastFourDigitsForNumber:(id)a0;
+ (id)internationalizedFormattedNumber:(id)a0 countryCode:(id)a1;
+ (id)internationalizedUnformattedNumber:(id)a0 countryCode:(id)a1;
+ (BOOL)isStringPhoneNumber:(id)a0;

@end
