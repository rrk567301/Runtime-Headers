@class NSArray;

@interface AFSearchAlarmsResponse : AFSiriResponse

@property (copy, nonatomic) NSArray *results;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
