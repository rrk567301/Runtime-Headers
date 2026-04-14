@interface CNLDAPTransforms : NSObject

+ (id /* block */)contactFromLDAPResultTransform;
+ (id)contactFromLDAPResult:(id)a0;
+ (id)propertyDescriptionForAttribute:(id)a0;
+ (id)descriptionsByAttribute;
+ (id)dictionaryByGroupingAddresses:(id)a0;
+ (id)dictionaryByGroupingPhotos:(id)a0;
+ (id)extractKeys:(id)a0 fromDictionary:(id)a1;
+ (id)workAddressKeys;
+ (id)homeAddressKeys;
+ (id)photoKeys;
+ (id)thumbnailPhotoKeys;
+ (id)dictionaryByNormalizingKeys:(id)a0;

@end
