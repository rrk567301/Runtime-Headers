@class MNNavTrayGuidanceEvent;

@interface Navigation.MNNavigationServiceCallback_DidUpdateNavTrayGuidance : MNNavigationServiceCallbackParameters

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) MNNavTrayGuidanceEvent *navTrayGuidanceEvent;
@property (nonatomic, readonly) unsigned long long type;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithNavTrayGuidanceEvent:(id)a0;

@end
