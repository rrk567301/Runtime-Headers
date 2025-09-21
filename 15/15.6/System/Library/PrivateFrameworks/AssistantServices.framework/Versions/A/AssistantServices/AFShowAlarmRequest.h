@class NSArray;

@interface AFShowAlarmRequest : AFSiriRequest

@property (copy, nonatomic) NSArray *alarms;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)createResponse;

@end
