@interface CNPostalAddressFormats : NSObject

+ (id)uncachedAddressFormats;
+ (id)addressFormats;
+ (id)localizedStringForPostalAddressString:(id)a0 returningNilIfNotFound:(BOOL)a1;

@end
