@class NSString;

@interface AFCreateAlarmResponse : AFSiriResponse

@property (copy, nonatomic) NSString *alarmIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
