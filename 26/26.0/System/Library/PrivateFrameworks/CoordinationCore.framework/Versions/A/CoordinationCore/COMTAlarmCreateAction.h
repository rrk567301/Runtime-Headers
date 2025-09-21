@class MTAlarm;

@interface COMTAlarmCreateAction : COMTAction

@property (readonly, copy, nonatomic) MTAlarm *alarm;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAlarm:(id)a0;

@end
