@class NSString, _DKCategoryType;

@interface _DKCategory : _DKObject <_DKHasComparableValue, _DKHasPrimaryValue, _DKHasObjectType>

@property long long integerValue;
@property (retain) _DKCategoryType *categoryType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)categoryWithInteger:(long long)a0 type:(id)a1;
+ (BOOL)supportsSecureCoding;
+ (id)entityName;
+ (id)objectFromManagedObject:(id)a0 readMetadata:(BOOL)a1 excludedMetadataKeys:(id)a2 cache:(id)a3;
+ (id)fromPBCodable:(id)a0;
+ (id)_categoryFromManagedObject:(id)a0 readMetadata:(BOOL)a1 cache:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)stringValue;
- (long long)typeCode;
- (double)doubleValue;
- (id)objectType;
- (id)initWithCoder:(id)a0;
- (long long)compareValue:(id)a0;
- (BOOL)copyToManagedObject:(id)a0;
- (id)primaryValue;
- (id)toPBCodable;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithInteger:(long long)a0 type:(id)a1 cache:(id)a2;

@end
