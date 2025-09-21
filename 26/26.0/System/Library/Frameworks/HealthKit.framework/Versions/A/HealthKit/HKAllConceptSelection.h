@interface HKAllConceptSelection : HKConceptSelection

@property (readonly, nonatomic) BOOL value;

+ (BOOL)supportsSecureCoding;

- (id)initWithValue:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
