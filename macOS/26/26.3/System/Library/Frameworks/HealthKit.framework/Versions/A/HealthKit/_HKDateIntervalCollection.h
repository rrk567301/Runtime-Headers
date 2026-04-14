@class NSDateComponents, NSDate;

@interface _HKDateIntervalCollection : NSObject <NSCopying, NSSecureCoding> {
    double _approximateIntervalDuration;
    long long _maxComponent;
    BOOL _canUseFastDateMath;
    double _canonicalIntervalDuration;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDate *anchorDate;
@property (readonly, copy, nonatomic) NSDateComponents *intervalComponents;
@property (nonatomic) BOOL enableRiskyFastMathOptimization;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)_dateByAddingInterval:(long long)a0 toDate:(id)a1 calendar:(id)a2 workComponents:(id)a3;
- (id)dateIntervalAtIndex:(long long)a0;
- (id)dateIntervalContainingDate:(id)a0 index:(long long *)a1;
- (id)dateIntervalForIntervalsContainingInterval:(id)a0;
- (id)initWithAnchorDate:(id)a0 intervalComponents:(id)a1;

@end
