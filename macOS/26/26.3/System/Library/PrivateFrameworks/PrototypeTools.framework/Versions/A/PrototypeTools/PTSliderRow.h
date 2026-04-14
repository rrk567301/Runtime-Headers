@interface PTSliderRow : PTSRow

@property (nonatomic) double minValue;
@property (nonatomic) double maxValue;
@property (copy, nonatomic) id /* block */ valueStringFormatter;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)minValue:(double)a0 maxValue:(double)a1;
- (id)valueStringFormatter:(id /* block */)a0;

@end
