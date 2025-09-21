@class PKAppletSubcredentialSharingInvitation, PKPaymentWebService;

@interface PKSubcredentialProvisioningAcceptRemoteDeviceInvitationConfiguration : PKSubcredentialProvisioningConfiguration

@property (readonly, nonatomic) PKAppletSubcredentialSharingInvitation *invitation;
@property (readonly, nonatomic) char canRequestInvitation;
@property (readonly, nonatomic) char declineRelatedInvitations;
@property (readonly, nonatomic) PKPaymentWebService *remoteDeviceWebService;
@property (readonly, nonatomic) PKPaymentWebService *localDeviceWebService;

- (id)description;
- (void).cxx_destruct;
- (id)transitionTable;
- (id)initWithInvitation:(id)a0 canRequestInvitation:(char)a1 declineRelatedInvitations:(char)a2 localDeviceWebService:(id)a3 remoteDeviceWebService:(id)a4;
- (id)initWithInvitation:(id)a0 canRequestInvitation:(char)a1 declineRelatedInvitations:(char)a2 localDeviceWebService:(id)a3 remoteDeviceWebService:(id)a4 configurationType:(long long)a5;
- (long long)startingState;

@end
