@class NSString;

@interface AFCreateAlarmResponse : AFSiriResponse

@property (copy, nonatomic) NSString *alarmIdentifier;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
