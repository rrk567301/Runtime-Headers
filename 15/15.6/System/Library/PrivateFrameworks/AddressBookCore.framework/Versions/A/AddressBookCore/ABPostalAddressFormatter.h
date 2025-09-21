@interface ABPostalAddressFormatter : NSObject

+ (id)formattedAddressFromDictionary:(id)a0 includeName:(char)a1 includeCompany:(char)a2 order:(id *)a3;
+ (id)formattedAddressFromDictionary:(id)a0 includeName:(char)a1 includeCompany:(char)a2 order:(id *)a3 defaultCountryCode:(id)a4;

@end
