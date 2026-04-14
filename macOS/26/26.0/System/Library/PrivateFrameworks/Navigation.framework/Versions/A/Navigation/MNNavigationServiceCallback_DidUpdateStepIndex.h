@interface MNNavigationServiceCallback_DidUpdateStepIndex : MNNavigationServiceCallbackParameters

@property (nonatomic) unsigned long long stepIndex;
@property (nonatomic) unsigned long long segmentIndex;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)type;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
