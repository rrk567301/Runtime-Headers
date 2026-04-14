@class MTAlarm;

@interface COMTAlarmCreateAction : COMTAction

@property (readonly, copy, nonatomic) MTAlarm *alarm;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAlarm:(id)a0;

@end
