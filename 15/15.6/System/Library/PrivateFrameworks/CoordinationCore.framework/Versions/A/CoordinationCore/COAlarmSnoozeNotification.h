@class NSString;

@interface COAlarmSnoozeNotification : COMeshNotification

@property (readonly, copy, nonatomic) NSString *identifier;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAlarmIdentifier:(id)a0;

@end
