@interface MNNavigationServiceCallback_WillEndNavigation : MNNavigationServiceCallbackParameters

@property (nonatomic) unsigned long long reason;

+ (BOOL)supportsSecureCoding;
+ (id)willEndNavigationWithReason:(unsigned long long)a0;

- (unsigned long long)type;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
