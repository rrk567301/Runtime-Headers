@class DNDScheduleTime;

@interface DNDScheduleTimePeriod : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) DNDScheduleTime *startTime;
@property (readonly, copy) DNDScheduleTime *endTime;
@property (readonly) unsigned long long weekdays;

- (id)_initWithPeriod:(id)a0;
- (id)description;
- (id)_initWithStartTime:(id)a0 endTime:(id)a1 weekdays:(unsigned long long)a2;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
