@interface MNNavigationServiceCallback_ShouldEnableIdleTimer : MNNavigationServiceCallbackParameters

@property (nonatomic) char shouldEnable;

+ (char)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)type;

@end
