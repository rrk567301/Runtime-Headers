@class NSArray;

@interface _HKCompoundFilter : _HKFilter {
    unsigned long long _subfilterCount;
}

@property (readonly, nonatomic) unsigned long long compoundPredicateType;
@property (readonly, copy, nonatomic) NSArray *subfilters;

+ (BOOL)supportsSecureCoding;
+ (id)compoundFilterWithFilter:(id)a0 otherFilter:(id)a1;
+ (id)andFilterWithSubfilters:(id)a0;
+ (id)orFilterWithSubfilters:(id)a0;
+ (id)notFilterWithSubfilter:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)acceptsDataObject:(id)a0;
- (long long)acceptsActivitySummary:(id)a0;
- (long long)acceptsDataObjectWithStartTimestamp:(double)a0 endTimestamp:(double)a1 valueInCanonicalUnit:(double)a2;
- (BOOL)acceptsWorkoutActivity:(id)a0;
- (id)initWithType:(unsigned long long)a0 subfilters:(id)a1;

@end
