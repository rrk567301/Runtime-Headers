@class NSDateComponents, NSDate;

@interface _HKDateIntervalCollection : NSObject <NSCopying, NSSecureCoding> {
    double _approximateIntervalDuration;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDate *anchorDate;
@property (readonly, copy, nonatomic) NSDateComponents *intervalComponents;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dateIntervalAtIndex:(long long)a0;
- (id)dateIntervalContainingDate:(id)a0 index:(long long *)a1;
- (id)dateIntervalForIntervalsContainingInterval:(id)a0;
- (id)initWithAnchorDate:(id)a0 intervalComponents:(id)a1;

@end
