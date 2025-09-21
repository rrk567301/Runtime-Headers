@interface PTSliderRow : PTSRow

@property (nonatomic) double minValue;
@property (nonatomic) double maxValue;
@property (copy, nonatomic) id /* block */ valueStringFormatter;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)minValue:(double)a0 maxValue:(double)a1;
- (id)valueStringFormatter:(id /* block */)a0;

@end
