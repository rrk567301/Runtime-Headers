@class NSArray;

@interface COAlarmNotification : COMeshNotification

@property (readonly, copy, nonatomic) NSArray *alarms;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAlarms:(id)a0;

@end
