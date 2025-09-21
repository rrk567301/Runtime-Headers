@class NSString, _DKQuantityType;

@interface _DKQuantity : _DKObject <_DKHasComparableValue, _DKHasPrimaryValue, _DKHasObjectType>

@property double doubleValue;
@property (retain) _DKQuantityType *quantityType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsSecureCoding;
+ (id)entityName;
+ (id)fromPBCodable:(id)a0;
+ (id)objectFromManagedObject:(id)a0 readMetadata:(char)a1 excludedMetadataKeys:(id)a2 cache:(id)a3;
+ (id)quantityWithDouble:(double)a0 type:(id)a1;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)stringValue;
- (long long)typeCode;
- (long long)compareValue:(id)a0;
- (char)copyToManagedObject:(id)a0;
- (id)initWithDouble:(double)a0 type:(id)a1;
- (id)objectType;
- (id)primaryValue;
- (id)toPBCodable;

@end
