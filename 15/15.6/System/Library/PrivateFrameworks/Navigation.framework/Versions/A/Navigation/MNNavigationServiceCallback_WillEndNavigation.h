@interface MNNavigationServiceCallback_WillEndNavigation : MNNavigationServiceCallbackParameters

@property (nonatomic) unsigned long long reason;

+ (char)supportsSecureCoding;
+ (id)willEndNavigationWithReason:(unsigned long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)type;

@end
