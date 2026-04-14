@class HKQuantityRange;

@interface HKValueHistogramSegment : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKQuantityRange *quantityRange;
@property (readonly, nonatomic) long long count;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithQuantityRange:(id)a0 count:(long long)a1;

@end
