@class NSString, NSArray;

@interface COMTAlarmNotificationAction : COMTAction

@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, copy, nonatomic) NSArray *alarms;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReason:(id)a0 alarms:(id)a1;

@end
