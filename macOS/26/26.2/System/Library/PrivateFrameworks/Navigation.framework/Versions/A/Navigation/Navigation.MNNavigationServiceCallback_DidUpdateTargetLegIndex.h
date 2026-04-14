@interface Navigation.MNNavigationServiceCallback_DidUpdateTargetLegIndex : MNNavigationServiceCallbackParameters

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long targetLegIndex;
@property (nonatomic, readonly) unsigned long long type;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithTargetLegIndex:(long long)a0;

@end
