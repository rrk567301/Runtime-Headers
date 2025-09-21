@interface _HKBooleanFilter : _HKFilter

@property (class, readonly, nonatomic) _HKBooleanFilter *trueFilter;
@property (class, readonly, nonatomic) _HKBooleanFilter *falseFilter;

@property (readonly, nonatomic) BOOL value;

+ (BOOL)supportsSecureCoding;

- (id)initWithValue:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (long long)acceptsActivitySummary:(id)a0;
- (BOOL)acceptsDataObject:(id)a0;
- (long long)acceptsDataObjectWithStartTimestamp:(double)a0 endTimestamp:(double)a1 valueInCanonicalUnit:(double)a2;
- (BOOL)acceptsWorkoutActivity:(id)a0;

@end
