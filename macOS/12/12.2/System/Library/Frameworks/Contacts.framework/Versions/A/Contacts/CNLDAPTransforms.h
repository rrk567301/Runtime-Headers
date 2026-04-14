@interface CNLDAPTransforms : NSObject

+ (id /* block */)contactFromLDAPResultTransform;
+ (id)contactFromLDAPResult:(id)a0;
+ (id)dictionaryByNormalizingKeys:(id)a0;
+ (id)dictionaryByGroupingAddresses:(id)a0;
+ (id)dictionaryByGroupingPhotos:(id)a0;
+ (id)propertyDescriptionForAttribute:(id)a0;
+ (id)descriptionsByAttribute;
+ (id)workAddressKeys;
+ (id)extractKeys:(id)a0 fromDictionary:(id)a1;
+ (id)homeAddressKeys;
+ (id)photoKeys;
+ (id)thumbnailPhotoKeys;

@end
