@interface PFMetadataTypeVerifier : NSObject

+ (id)verifiedValueForKey:(id)a0 fromProperties:(id)a1;
+ (id)verifiedValueForKey:(id)a0 keySpace:(id)a1 fromAVMetadataItems:(id)a2;
+ (id)_expectedPropertyTypes;
+ (id)_convertValue:(id)a0 toClass:(Class)a1 forKey:(id)a2;

@end
