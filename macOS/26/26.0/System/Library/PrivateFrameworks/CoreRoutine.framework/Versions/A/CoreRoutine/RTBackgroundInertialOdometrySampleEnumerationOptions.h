@class NSDateInterval;

@interface RTBackgroundInertialOdometrySampleEnumerationOptions : RTEnumerationOptions <NSCopying>

@property (copy, nonatomic) NSDateInterval *dateInterval;

+ (BOOL)supportsSecureCoding;

- (id)initWithDateInterval:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (Class)enumeratedType;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToOptions:(id)a0;
- (id /* block */)processingBlock;
- (void).cxx_destruct;

@end
