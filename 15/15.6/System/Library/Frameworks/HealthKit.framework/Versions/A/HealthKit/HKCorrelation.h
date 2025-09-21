@class NSUUID, NSSet, HKCorrelationType, NSMutableDictionary;

@interface HKCorrelation : HKSample {
    NSMutableDictionary *_objects;
}

@property (readonly, getter=_UUID) NSUUID *UUID;
@property (readonly) HKCorrelationType *correlationType;
@property (readonly, copy) NSSet *objects;

+ (char)supportsSecureCoding;
+ (char)_allowEmptyCorrelations;
+ (char)_isConcreteObjectClass;
+ (id)correlationWithType:(id)a0 startDate:(id)a1 endDate:(id)a2 objects:(id)a3;
+ (id)correlationWithType:(id)a0 startDate:(id)a1 endDate:(id)a2 objects:(id)a3 device:(id)a4 metadata:(id)a5;
+ (id)correlationWithType:(id)a0 startDate:(id)a1 endDate:(id)a2 objects:(id)a3 metadata:(id)a4;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)objectsForType:(id)a0;
- (void)_addCorrelatedObject:(id)a0;
- (void)_addCorrelatedObjects:(id)a0;
- (id)_allTypes;
- (char)_containsObjects;
- (char)_correlatedObjectsMatchFilterDictionary:(id)a0;
- (void)_filterCorrelatedObjectsWithFilterDictionary:(id)a0;
- (void)_removeAllCorrelatedObjects;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned long long x1; })a0;

@end
