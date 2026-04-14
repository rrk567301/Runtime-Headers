@class NSString, _DKQuantityType;

@interface _DKQuantity : _DKObject <_DKHasComparableValue, _DKHasPrimaryValue, _DKHasObjectType>

@property double doubleValue;
@property (retain) _DKQuantityType *quantityType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entityName;
+ (BOOL)supportsSecureCoding;
+ (id)fromPBCodable:(id)a0;
+ (id)quantityWithDouble:(double)a0 type:(id)a1;
+ (id)objectFromManagedObject:(id)a0 readMetadata:(BOOL)a1 excludedMetadataKeys:(id)a2 cache:(id)a3;

- (id)stringValue;
- (id)toPBCodable;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDouble:(double)a0 type:(id)a1;
- (BOOL)copyToManagedObject:(id)a0;
- (void).cxx_destruct;
- (long long)compareValue:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)typeCode;
- (id)primaryValue;
- (id)objectType;

@end
