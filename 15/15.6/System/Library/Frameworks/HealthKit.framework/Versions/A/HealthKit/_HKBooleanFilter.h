@interface _HKBooleanFilter : _HKFilter

@property (class, readonly, nonatomic) _HKBooleanFilter *trueFilter;
@property (class, readonly, nonatomic) _HKBooleanFilter *falseFilter;

@property (readonly, nonatomic) char value;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithValue:(char)a0;
- (long long)acceptsActivitySummary:(id)a0;
- (char)acceptsDataObject:(id)a0;
- (long long)acceptsDataObjectWithStartTimestamp:(double)a0 endTimestamp:(double)a1 valueInCanonicalUnit:(double)a2;
- (char)acceptsWorkoutActivity:(id)a0;

@end
