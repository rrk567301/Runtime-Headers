@class STAlarm;

@interface AFCreateAlarmRequest : AFSiriRequest

@property (retain, nonatomic) STAlarm *alarm;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)createResponse;

@end
