@class NSString;

@interface COAlarmSnoozeRequest : COMeshRequest

@property (readonly, copy, nonatomic) NSString *identifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAlarmIdentifier:(id)a0;

@end
