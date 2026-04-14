@interface CNPostalAddressFormats : NSObject

+ (id)addressFormats;
+ (id)uncachedAddressFormats;
+ (id)localizedStringForPostalAddressString:(id)a0 returningNilIfNotFound:(BOOL)a1;

@end
