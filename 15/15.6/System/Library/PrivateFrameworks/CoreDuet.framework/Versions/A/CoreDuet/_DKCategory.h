@class NSString, _DKCategoryType;

@interface _DKCategory : _DKObject <_DKHasComparableValue, _DKHasPrimaryValue, _DKHasObjectType>

@property long long integerValue;
@property (retain) _DKCategoryType *categoryType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsSecureCoding;
+ (id)entityName;
+ (id)_categoryFromManagedObject:(id)a0 readMetadata:(char)a1 cache:(id)a2;
+ (id)categoryWithInteger:(long long)a0 type:(id)a1;
+ (id)fromPBCodable:(id)a0;
+ (id)objectFromManagedObject:(id)a0 readMetadata:(char)a1 excludedMetadataKeys:(id)a2 cache:(id)a3;

- (char)isEqual:(id)a0;
- (double)doubleValue;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)stringValue;
- (long long)typeCode;
- (long long)compareValue:(id)a0;
- (char)copyToManagedObject:(id)a0;
- (id)initWithInteger:(long long)a0 type:(id)a1 cache:(id)a2;
- (id)objectType;
- (id)primaryValue;
- (id)toPBCodable;

@end
