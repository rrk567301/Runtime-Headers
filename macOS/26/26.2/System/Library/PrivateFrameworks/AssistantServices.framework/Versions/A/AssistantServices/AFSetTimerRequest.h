@class STTimer;

@interface AFSetTimerRequest : AFSiriRequest

@property (retain, nonatomic) STTimer *timer;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)createResponse;

@end
