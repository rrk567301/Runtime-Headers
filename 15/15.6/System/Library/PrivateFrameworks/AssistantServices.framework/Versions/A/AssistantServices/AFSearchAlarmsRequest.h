@class STAlarm;

@interface AFSearchAlarmsRequest : AFSiriRequest

@property (nonatomic) long long options;
@property (retain, nonatomic) STAlarm *criteria;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)createResponse;

@end
