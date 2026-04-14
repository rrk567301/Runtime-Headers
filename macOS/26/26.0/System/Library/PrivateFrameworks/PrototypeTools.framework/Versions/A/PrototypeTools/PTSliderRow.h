@interface PTSliderRow : PTSRow

@property (nonatomic) double minValue;
@property (nonatomic) double maxValue;
@property (copy, nonatomic) id /* block */ valueStringFormatter;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)minValue:(double)a0 maxValue:(double)a1;
- (id)valueStringFormatter:(id /* block */)a0;

@end
