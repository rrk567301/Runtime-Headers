@interface PTEditFloatRow : PTSRow

@property (nonatomic) unsigned long long precision;
@property (nonatomic) double minValue;
@property (nonatomic) double maxValue;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)_validatedValue:(id)a0;
- (id)between:(double)a0 and:(double)a1;
- (id)precision:(unsigned long long)a0;

@end
