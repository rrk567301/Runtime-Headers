@interface ATXAggregatedAppLaunchData : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long rawLaunchCount;
@property (readonly, nonatomic) unsigned long long uniqueDaysLaunched;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRawLaunchCount:(unsigned long long)a0 uniqueDaysLaunched:(unsigned long long)a1;
- (char)isGreaterThanOrEqualToData:(id)a0;

@end
