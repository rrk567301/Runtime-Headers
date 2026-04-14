@interface PKSubcredentialProvisioningConfiguration : NSObject

@property (readonly, nonatomic) long long configurationType;

- (id)remoteDeviceInvitation;
- (id)ownerConfiguration;
- (id)acceptInvitationConfiguration;
- (id)localDeviceConfiguration;
- (id)initWithConfigurationType:(long long)a0;
- (id)remoteDeviceConfiguration;
- (id)transitionTable;
- (long long)startingState;

@end
