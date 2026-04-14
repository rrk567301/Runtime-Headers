@interface ABPostalAddressFormatSubmenuGenerator : NSObject

+ (id)menuItemWith:(id)a0 selector:(SEL)a1 selectedCountryCode:(id)a2;
+ (id)makeChangeAddressFormatSubmenuItemsWithTarget:(id)a0 selector:(SEL)a1;
+ (id)makeResetToDefaultItemWithTarget:(id)a0 selector:(SEL)a1;
+ (id)makeChangeAddressFormatMenuWithSubmenuItems:(id)a0 checkmarkSelectedCountryCode:(id)a1;
+ (BOOL)shouldEnableItem:(id)a0 givenCountryCode:(id)a1;
+ (id)sortedCountryCodeLocalizedCountryNamePairs;
+ (id)makeCountryCodeLocalizedCountryNamePairs;

@end
