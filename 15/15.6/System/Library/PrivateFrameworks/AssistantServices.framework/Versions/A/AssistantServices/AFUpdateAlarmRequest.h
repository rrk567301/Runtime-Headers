@class NSArray;

@interface AFUpdateAlarmRequest : AFSiriRequest

@property (copy, nonatomic) NSArray *alarms;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)createResponse;
- (id)alarm;

@end
