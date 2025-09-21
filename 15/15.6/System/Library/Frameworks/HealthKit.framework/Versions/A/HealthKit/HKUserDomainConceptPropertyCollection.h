@class NSArray;

@interface HKUserDomainConceptPropertyCollection : NSObject <NSCopying, NSSecureCoding, NSFastEnumeration>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *basicProperties;
@property (readonly, copy, nonatomic) NSArray *allBasicProperties;
@property (readonly, copy, nonatomic) NSArray *properties;
@property (readonly, nonatomic) long long count;

+ (id)propertyCollectionByMergingCollection:(id)a0 otherCollection:(id)a1;
+ (id)propertyCollectionByMergingCollection:(id)a0 otherCollection:(id)a1 options:(unsigned long long)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProperties:(id)a0;
- (id)_basicPropertiesIncludeDeleted:(char)a0;
- (id)_propertiesByType;
- (id)_propertiesWithType:(long long)a0 includeDeleted:(char)a1;
- (id)allPropertiesWithType:(long long)a0;
- (id)collectionByAddingProperties:(id)a0;
- (id)firstBasicPropertyWithType:(long long)a0;
- (id)firstPropertyWithType:(long long)a0;
- (id)propertiesWithType:(long long)a0;
- (id)propertyCollectionByMerging:(id)a0 options:(unsigned long long)a1;

@end
