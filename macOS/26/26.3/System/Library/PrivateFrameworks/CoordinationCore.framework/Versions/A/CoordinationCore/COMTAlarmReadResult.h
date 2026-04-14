@class NSArray;

@interface COMTAlarmReadResult : COMTResult

@property (readonly, copy, nonatomic) NSArray *alarms;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAlarms:(id)a0 actionIdentifier:(id)a1;

@end
