@class DNDScheduleTimePeriod;

@interface DNDScheduleSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long scheduleEnabledSetting;
@property (readonly, copy) DNDScheduleTimePeriod *timePeriod;
@property (readonly) unsigned long long bedtimeBehaviorEnabledSetting;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_initWithSettings:(id)a0;
- (id)initWithScheduleEnabledSetting:(unsigned long long)a0 timePeriod:(id)a1 bedtimeBehaviorEnabledSetting:(unsigned long long)a2;

@end
