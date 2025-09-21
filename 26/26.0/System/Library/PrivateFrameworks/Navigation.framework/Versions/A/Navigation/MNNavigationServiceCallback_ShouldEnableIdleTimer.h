@interface MNNavigationServiceCallback_ShouldEnableIdleTimer : MNNavigationServiceCallbackParameters

@property (nonatomic) BOOL shouldEnable;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)type;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
