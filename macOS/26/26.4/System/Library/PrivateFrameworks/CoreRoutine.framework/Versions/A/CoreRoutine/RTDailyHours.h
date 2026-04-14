@class NSArray;

@interface RTDailyHours : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long weekday;
@property (readonly, copy, nonatomic) NSArray *timeIntervals;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithWeekday:(unsigned long long)a0 timeIntervals:(id)a1;
- (BOOL)isEqualToDailyHours:(id)a0;

@end
