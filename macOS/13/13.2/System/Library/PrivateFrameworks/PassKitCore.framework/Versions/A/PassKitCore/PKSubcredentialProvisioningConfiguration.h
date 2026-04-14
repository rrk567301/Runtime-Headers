@interface PKSubcredentialProvisioningConfiguration : NSObject

@property (readonly, nonatomic) long long configurationType;

- (id)initWithConfigurationType:(long long)a0;
- (id)localDeviceConfiguration;
- (id)ownerConfiguration;
- (id)remoteDeviceConfiguration;
- (id)acceptInvitationConfiguration;
- (id)remoteDeviceInvitation;
- (id)transitionTable;
- (long long)startingState;

@end
