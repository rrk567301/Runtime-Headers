@interface DDSContentItemMatcher : NSObject

+ (char)_anyDictionaryIn:(id)a0 matches:(id)a1 shouldLenientlyMatch:(id /* block */)a2;
+ (char)_anyStringIn:(id)a0 matches:(id)a1 acceptUnspecifiedValue:(char)a2;
+ (char)_dictionary:(id)a0 matches:(id)a1 acceptUnspecifiedAttribute:(char)a2 lenientMatch:(char)a3;
+ (char)_string:(id)a0 matches:(id)a1 acceptUnspecifiedValue:(char)a2;
+ (id)assetContentItemsMatching:(id)a0 contentItems:(id)a1 parentAsset:(id)a2;
+ (char)shouldLenientlyMatchWithContentItemsForRegion:(id)a0;

@end
