@interface CNPostalAddressFormats : NSObject

+ (id)sharedLocalizer;
+ (id)_unitTestableLocalizedStringForPostalAddressString:(id)a0 returningNilIfNotFound:(char)a1;
+ (id)addressFormats;
+ (id)localizedStringForPostalAddressString:(id)a0 returningNilIfNotFound:(char)a1;
+ (id)makeLocalizer;

@end
