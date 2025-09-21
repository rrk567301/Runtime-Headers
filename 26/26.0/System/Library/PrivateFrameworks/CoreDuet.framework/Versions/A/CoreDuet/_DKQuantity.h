@class NSString, _DKQuantityType;

@interface _DKQuantity : _DKObject <_DKHasComparableValue, _DKHasPrimaryValue, _DKHasObjectType>

@property double doubleValue;
@property (retain) _DKQuantityType *quantityType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)entityName;
+ (id)objectFromManagedObject:(id)a0 readMetadata:(BOOL)a1 excludedMetadataKeys:(id)a2 cache:(id)a3;
+ (id)fromPBCodable:(id)a0;
+ (id)quantityWithDouble:(double)a0 type:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)stringValue;
- (long long)typeCode;
- (id)objectType;
- (id)initWithCoder:(id)a0;
- (long long)compareValue:(id)a0;
- (BOOL)copyToManagedObject:(id)a0;
- (id)primaryValue;
- (id)toPBCodable;
- (BOOL)isEqual:(id)a0;
- (id)initWithDouble:(double)a0 type:(id)a1;
- (void).cxx_destruct;

@end
