@class NSString, AALocalContactInfo, AOSUIInviteMessagesFlowController, ACAccount;

@interface AOSUIMyBeneficiaryActionHandler : NSObject <AOSUIAccountContactDetailsActionHandler>

@property (retain, nonatomic) ACAccount *appleAccount;
@property (retain) AOSUIInviteMessagesFlowController *inviteFlowController;
@property (readonly) AALocalContactInfo *contactInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)doDestructiveAction:(id)a0;
- (void)doPrimaryAction:(id)a0;
- (id)initWithAppleAccount:(id)a0 localContactInfo:(id)a1;
- (void)_showInviteFlow:(id)a0;
- (void)_showAccessKey:(id)a0;

@end
