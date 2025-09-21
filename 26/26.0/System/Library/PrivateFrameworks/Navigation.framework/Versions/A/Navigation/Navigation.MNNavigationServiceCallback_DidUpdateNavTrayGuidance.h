@class MNNavTrayGuidanceEvent;

@interface Navigation.MNNavigationServiceCallback_DidUpdateNavTrayGuidance : MNNavigationServiceCallbackParameters

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) MNNavTrayGuidanceEvent *navTrayGuidanceEvent;
@property (nonatomic, readonly) unsigned long long type;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNavTrayGuidanceEvent:(id)a0;

@end
