@class NSArray;

@interface AFDismissTimerRequest : AFSiriRequest

@property (copy, nonatomic) NSArray *timerURLs;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)createResponse;

@end
