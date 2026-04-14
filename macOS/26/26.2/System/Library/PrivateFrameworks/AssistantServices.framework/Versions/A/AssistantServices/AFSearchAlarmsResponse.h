@class NSArray;

@interface AFSearchAlarmsResponse : AFSiriResponse

@property (copy, nonatomic) NSArray *results;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
