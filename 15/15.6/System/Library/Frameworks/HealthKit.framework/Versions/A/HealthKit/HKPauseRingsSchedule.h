@interface HKPauseRingsSchedule : HKSample <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long startDateIndex;
@property (nonatomic) long long endDateIndex;

+ (char)_isConcreteObjectClass;
+ (id)pauseRingsScheduleWithStartDateIndex:(long long)a0 endDateIndex:(long long)a1 device:(id)a2 metadata:(id)a3;
+ (char)supportsEquivalence;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEquivalent:(id)a0;

@end
