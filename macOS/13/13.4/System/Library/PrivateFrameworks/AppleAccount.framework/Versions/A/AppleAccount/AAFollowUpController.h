@interface AAFollowUpController : NSObject <AAFollowUpProtocol>

- (id)_addRecoveryContactAction;
- (id)_addRecoveryKeyAction;
- (void)_dismissFollowUpWithIdentifiers:(id)a0 completion:(id /* block */)a1;
- (id)_followUpController;
- (id)_followUpItemForBeneficiaryIneligible:(id)a0;
- (id)_followUpItemForBeneficiaryRemoved:(id)a0;
- (id)_followUpItemForCustodianEmbargo:(id)a0;
- (id)_followUpItemForCustodianInvitationReminder:(id)a0;
- (id)_followUpItemForCustodianRemoved:(id)a0;
- (id)_followUpItemForCustodianWalrusNoLiveness:(id)a0;
- (id)_followUpItemForCustodianWalrusRemoved:(id)a0;
- (id)_followUpItemForRenewCredentials:(id)a0;
- (id)_followUpItemForStartUsing:(id)a0;
- (id)_followUpItemForVerifyTerms:(id)a0;
- (id)_followUpItemForWalrusUserRecoveryFactorsMissing:(id)a0;
- (id)_followupActionUserInfo:(id)a0;
- (id)_recoveryNotificationWithInfo:(id)a0 type:(id)a1;
- (BOOL)_shouldPostRenewFollowup:(id)a0;
- (id)_walrusUserRecoveryFactorsMissingNotification;
- (double)ageOfOldestCustodianCFU;
- (id)creationDateOfOldestFollowUpWithIdentifiers:(id)a0;
- (void)dismissFollowUpWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (BOOL)dismissFollowUpWithIdentifier:(id)a0 error:(id *)a1;
- (void)dismissFollowUpWithIdentifier:(id)a0 forAccount:(id)a1 completion:(id /* block */)a2;
- (void)dismissFollowUpsForAccount:(id)a0 identifiers:(id)a1 completion:(id /* block */)a2;
- (id)followUpItemForIdentifier:(id)a0;
- (id)followUpItemForIdentifier:(id)a0 userInfo:(id)a1;
- (BOOL)isRenewCredentialsCFUPosted;
- (void)pendingFollowUpWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)pendingFollowUpsForAccount:(id)a0 completion:(id /* block */)a1;
- (void)postFollowUpWithIdentifier:(id)a0 forAccount:(id)a1 userInfo:(id)a2 completion:(id /* block */)a3;
- (void)postFollowUpWithIdentifier:(id)a0 userInfo:(id)a1 completion:(id /* block */)a2;
- (BOOL)postFollowUpWithIdentifier:(id)a0 userInfo:(id)a1 error:(id *)a2;

@end
