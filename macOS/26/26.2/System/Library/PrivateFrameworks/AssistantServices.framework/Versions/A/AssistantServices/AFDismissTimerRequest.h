@class NSArray;

@interface AFDismissTimerRequest : AFSiriRequest

@property (copy, nonatomic) NSArray *timerURLs;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)createResponse;

@end
