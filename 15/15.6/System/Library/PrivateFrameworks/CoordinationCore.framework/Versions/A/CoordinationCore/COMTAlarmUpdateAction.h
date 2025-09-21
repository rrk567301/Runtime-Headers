@class MTAlarm;

@interface COMTAlarmUpdateAction : COMTAction

@property (readonly, copy, nonatomic) MTAlarm *alarm;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAlarm:(id)a0;

@end
