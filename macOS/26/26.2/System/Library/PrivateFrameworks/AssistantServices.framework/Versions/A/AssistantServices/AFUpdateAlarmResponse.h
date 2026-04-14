@class NSArray;

@interface AFUpdateAlarmResponse : AFSiriResponse

@property (copy, nonatomic) NSArray *alarmIdentifiers;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setAlarmIdentifier:(id)a0;

@end
