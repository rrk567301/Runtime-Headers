@class NSString, NSDataDetector;

@interface CNAutocompleteResultNamer : NSObject

@property (copy) NSString *prefix;
@property (copy) NSString *addressString;
@property char includeAddress;
@property char onlyEmailFormat;
@property (retain) NSDataDetector *phoneNumberDetector;

+ (id)displayStringForResult:(id)a0 accountName:(id)a1 prefix:(id)a2 includeAddress:(char)a3 onlyEmailFormat:(char)a4;
+ (id)displayStringForResult:(id)a0 withPrefix:(id)a1 withAddress:(id)a2 includeAddress:(char)a3 onlyEmailFormat:(char)a4;

- (void).cxx_destruct;
- (id)baseNameForResult:(id)a0;
- (id)displayStringForResult:(id)a0 accountName:(id)a1;
- (id)displayStringForResult:(id)a0 withAddress:(id)a1;
- (id)effectiveAddressForResult:(id)a0 withAddressString:(id)a1;
- (id)fallbackDisplayNameWithComponents:(id)a0;
- (id)fallbackDisplayNameWithResult:(id)a0;
- (id)fallbackNameWithResult:(id)a0;
- (id)initAndIncludeAddress:(char)a0 onlyEmailFormat:(char)a1;
- (id)initWithPrefix:(id)a0 includeAddress:(char)a1 onlyEmailFormat:(char)a2;
- (id)matchingNameWithResult:(id)a0;
- (id)matchingStringByCombiningNameComponents:(id)a0;
- (char)shouldDecorateString:(id)a0 withAddress:(id)a1;
- (id)stringByCleaningString:(id)a0;
- (id)stringByDecoratingString:(id)a0 withAddress:(id)a1 isPhoneNumber:(char)a2;
- (id)stringByDecoratingString:(id)a0 withAddressString:(id)a1 forResult:(id)a2;
- (id)tokenizedNameWithDisplayName:(id)a0;

@end
