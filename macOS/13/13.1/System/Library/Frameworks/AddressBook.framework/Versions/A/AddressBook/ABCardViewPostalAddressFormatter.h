@interface ABCardViewPostalAddressFormatter : NSObject

+ (id)formatComponentToValueKeypathMap;
+ (unsigned long long)numberOfLinesInFormattedAddress:(id)a0;
+ (id)formatAddress:(id)a0;
+ (id)formatAddress:(id)a0 withDefaultCountryCode:(id)a1;
+ (id)formatDictionaryForAddress:(id)a0 withDefaultCountryCode:(id)a1;
+ (id)formatAddress:(id)a0 withFormatDictionary:(id)a1;
+ (id)formatAddress:(id)a0 withFormatString:(id)a1;

@end
