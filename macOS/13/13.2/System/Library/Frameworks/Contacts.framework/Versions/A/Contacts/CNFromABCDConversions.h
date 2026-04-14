@interface CNFromABCDConversions : NSObject

+ (id /* block */)contactFromABCDContactWithKeysToFetch:(id)a0;
+ (id)contactFromABCDContact:(id)a0 keysToConvert:(id)a1;
+ (id)makeMutableContactWithIdentifierString:(id)a0 availableKeys:(id)a1;
+ (void)updateContact:(id)a0 fromABCDContact:(id)a1 withPropertyKeyDescriptor:(id)a2;
+ (id /* block */)groupFromABCDGroupTransform;
+ (id)groupFromABCDGroup:(id)a0;

@end
