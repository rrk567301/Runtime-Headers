@interface Navigation.MNNavigationServiceCallback_DidUpdateUpcomingAnchorPointIndex : MNNavigationServiceCallbackParameters

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long anchorPointIndex;
@property (nonatomic, readonly) unsigned long long type;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAnchorPointIndex:(long long)a0;

@end
