@class NSDateInterval;

@interface RTTripSegmentInertialDataEnumerationOptions : RTEnumerationOptions <NSCopying>

@property (copy, nonatomic) NSDateInterval *dateInterval;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqualToOptions:(id)a0;
- (id)description;
- (id)init;
- (id)initWithDateInterval:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)enumeratedType;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id /* block */)processingBlock;
- (void)encodeWithCoder:(id)a0;

@end
