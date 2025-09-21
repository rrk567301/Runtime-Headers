@class NSArray;

@interface AFDismissAlarmRequest : AFSiriRequest

@property (copy, nonatomic) NSArray *alarmURLs;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)createResponse;

@end
