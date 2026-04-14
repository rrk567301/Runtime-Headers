@class NSString;

@interface CNContactKeyVector : NSObject <NSMutableCopying, CNKeyDescriptor_Private> {
    long long _bitBuckets[1];
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)freezeIfClassIsImmutable:(id)a0;
+ (id)keyVector;
+ (id)keyVectorWithAllKeys;
+ (id)keyVectorWithKey:(id)a0;
+ (id)keyVectorWithKeys:(id)a0;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)containsKey:(id)a0;
- (id)_cn_requiredKeys;
- (void)_cn_executeGetterForRepresentedKeys:(id /* block */)a0;
- (id)_cn_optionalKeys;
- (id)_cn_ignorableKeys;
- (id)keyVectorByAddingKey:(id)a0;
- (id)keyVectorByAddingKeys:(id)a0;
- (id)keyVectorByAddingKeysFromKeyVector:(id)a0;
- (id)keyVectorByRemovingKeys:(id)a0;
- (id)keyVectorByRemovingKeysFromKeyVector:(id)a0;
- (id)initWithKeys:(id)a0;
- (void)_checkStorageSize;
- (id)initWithAllKeys;
- (BOOL)containsAllKeys;
- (void)enumeratePropertiesUsingBlock:(id /* block */)a0;
- (long long *)_bitBuckets;
- (BOOL)isEqualToKeyVector:(id)a0;
- (BOOL)isSubsetOfKeyVector:(id)a0;
- (BOOL)intersectsKeyVector:(id)a0;

@end
