@class STTimer;

@interface AFSetTimerRequest : AFSiriRequest

@property (retain, nonatomic) STTimer *timer;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)createResponse;

@end
