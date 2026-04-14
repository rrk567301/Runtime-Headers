@interface CMCatherineData : CMLogItem

@property (readonly, nonatomic) double catherine;
@property (readonly, nonatomic) double confidence;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCatherine:(double)a0 confidence:(double)a1 timestamp:(double)a2;

@end
