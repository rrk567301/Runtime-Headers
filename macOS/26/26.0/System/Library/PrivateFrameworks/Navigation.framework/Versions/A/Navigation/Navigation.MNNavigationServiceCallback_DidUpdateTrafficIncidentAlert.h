@class MNTrafficIncidentAlert, NSString;

@interface Navigation.MNNavigationServiceCallback_DidUpdateTrafficIncidentAlert : MNNavigationServiceCallbackParameters

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) MNTrafficIncidentAlert *trafficIncidentAlert;
@property (nonatomic, readonly) long long updateType;
@property (nonatomic, readonly) NSString *updateTypeString;
@property (nonatomic, readonly) unsigned long long type;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithUpdateType:(long long)a0 trafficIncidentAlert:(id)a1;

@end
