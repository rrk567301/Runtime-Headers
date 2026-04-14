@interface DNDScheduleTime : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hour;
@property (readonly) unsigned long long minute;

+ (id)defaultStartTime;
+ (id)defaultEndTime;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dateComponents;
- (id)_initWithTime:(id)a0;
- (id)_initWithHour:(unsigned long long)a0 minute:(unsigned long long)a1;

@end
