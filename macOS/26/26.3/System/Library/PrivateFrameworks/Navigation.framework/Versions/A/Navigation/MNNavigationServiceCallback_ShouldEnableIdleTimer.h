@interface MNNavigationServiceCallback_ShouldEnableIdleTimer : MNNavigationServiceCallbackParameters

@property (nonatomic) BOOL shouldEnable;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)type;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
