@interface AAFollowUpController : NSObject <AAFollowUpProtocol>

- (id)_followupActionUserInfo:(id)a0;
- (BOOL)_shouldPostRenewFollowup:(id)a0;
- (id)_recoveryNotificationWithInfo:(id)a0 type:(id)a1;
- (id)followUpItemForIdentifier:(id)a0 userInfo:(id)a1;
- (id)_followUpController;
- (void)postFollowUpWithIdentifier:(id)a0 userInfo:(id)a1 completion:(id /* block */)a2;
- (void)pendingFollowUpWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)dismissFollowUpWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)_followUpItemForStartUsing:(id)a0;
- (id)_followUpItemForVerifyTerms:(id)a0;
- (id)_followUpItemForRenewCredentials:(id)a0;
- (id)_followUpItemForCustodianInvitationReminder:(id)a0;
- (id)_followUpItemForCustodianRemoved:(id)a0;
- (id)_followUpItemForBeneficiaryRemoved:(id)a0;
- (id)_followUpItemForBeneficiaryIneligible:(id)a0;
- (id)_followUpItemForCustodianEmbargo:(id)a0;
- (void)_dismissFollowUpWithIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)pendingFollowUpsForAccount:(id)a0 completion:(id /* block */)a1;
- (id)followUpItemForIdentifier:(id)a0;
- (void)postFollowUpWithIdentifier:(id)a0 forAccount:(id)a1 userInfo:(id)a2 completion:(id /* block */)a3;
- (void)dismissFollowUpWithIdentifier:(id)a0 forAccount:(id)a1 completion:(id /* block */)a2;
- (void)dismissFollowUpsForAccount:(id)a0 identifiers:(id)a1 completion:(id /* block */)a2;

@end
