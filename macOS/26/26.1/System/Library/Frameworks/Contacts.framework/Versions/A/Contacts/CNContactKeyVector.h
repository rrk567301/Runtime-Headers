@class NSString;

@interface CNContactKeyVector : NSObject <NSMutableCopying, CNKeyDescriptor_Private> {
    long long _bitBuckets[2];
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyVectorWithKeys:(id)a0;
+ (id)freezeIfClassIsImmutable:(id)a0;
+ (id)keyVectorWithAllKeys;
+ (id)keyVector;
+ (id)keyVectorWithKey:(id)a0;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)_cn_executeGetterForRepresentedKeys:(id /* block */)a0;
- (id)_cn_ignorableKeys;
- (id)keyVectorByAddingKey:(id)a0;
- (id)_cn_requiredKeys;
- (void)enumeratePropertiesUsingBlock:(id /* block */)a0;
- (id)initWithAllKeys;
- (id)_cn_optionalKeys;
- (id)keyVectorByRemovingKeysFromKeyVector:(id)a0;
- (BOOL)isEqualToKeyVector:(id)a0;
- (BOOL)containsKey:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)keyVectorByAddingKeys:(id)a0;
- (BOOL)intersectsKeyVector:(id)a0;
- (void)_checkStorageSize;
- (id)initWithCoder:(id)a0;
- (id)initWithKeys:(id)a0;
- (BOOL)containsAllKeys;
- (BOOL)isSubsetOfKeyVector:(id)a0;
- (id)keyVectorByAddingKeysFromKeyVector:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (long long *)_bitBuckets;
- (id)keyVectorByRemovingKeys:(id)a0;

@end
