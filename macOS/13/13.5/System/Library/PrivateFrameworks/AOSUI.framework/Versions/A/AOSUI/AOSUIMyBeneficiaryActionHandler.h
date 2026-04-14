@class NSString, AALocalContactInfo, AOSUIInviteMessagesFlowController, ACAccount;

@interface AOSUIMyBeneficiaryActionHandler : NSObject <AOSUIAccountContactPromptActionHandler>

@property (retain) AOSUIInviteMessagesFlowController *inviteFlowController;
@property (readonly, nonatomic) ACAccount *appleAccount;
@property (readonly, nonatomic) AALocalContactInfo *contactInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_showAccessKey:(id)a0;
- (void)_showInviteFlow:(id)a0;
- (void)doDestructiveAction:(id)a0;
- (void)doPrimaryAction:(id)a0;
- (id)initWithAppleAccount:(id)a0 localContactInfo:(id)a1;

@end
