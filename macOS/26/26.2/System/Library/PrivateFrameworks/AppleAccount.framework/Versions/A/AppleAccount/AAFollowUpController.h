@class AAAFollowUpAnalyticsInfo;

@interface AAFollowUpController : NSObject <AAFollowUpProtocol>

@property (copy, nonatomic) AAAFollowUpAnalyticsInfo *analyticsInfo;

- (void)postFollowUpWithIdentifier:(id)a0 forAccount:(id)a1 userInfo:(id)a2 completion:(id /* block */)a3;
- (id)_createNewRecoveryKeyActionWithUserInfo:(id)a0;
- (void)sendPostCFUTelemetryEventWithAccount:(id)a0 forIdentifier:(id)a1 success:(BOOL)a2 error:(id)a3;
- (id)_followUpItemForWalrusUserRecoveryFactorsMissing:(id)a0;
- (id)_followUpController;
- (void)dismissFollowUpsStartingWithIdentifierPrefix:(id)a0 account:(id)a1 completion:(id /* block */)a2;
- (id)_pendingFollowUpItemsWithIdentifier:(id)a0 forAccount:(id)a1;
- (id)_followUpForWalrusRecoveryKeyMismatchWithContext:(id)a0;
- (id)_verifyRecoveryKeyAction;
- (id)_followUpItemForCustodianWalrusNoLiveness:(id)a0;
- (id)_showAccountRecoveryPane;
- (id)_walrusUserRecoveryFactorsMissingNotification;
- (BOOL)_shouldPostRenewFollowup:(id)a0;
- (id)followUpItemForIdentifier:(id)a0;
- (id)_followUpItemForCustodianEmbargo:(id)a0;
- (id)_recoveryKeyMismatchOtherOptionsActionWithUserInfo:(id)a0;
- (id)_constructAnalyticsInforFromAccount:(id)a0 forIdentifier:(id)a1;
- (id)_addRecoveryContactAction;
- (id)_followUpItemForBeneficiaryRemoved:(id)a0;
- (id)_followUpItemForStartUsing:(id)a0;
- (id)_filterFollowUpItems:(id)a0 byIdentifier:(id)a1 byAccount:(id)a2;
- (id)_followUpItemForCustodianInvitationReminder:(id)a0;
- (void).cxx_destruct;
- (id)pendingCFUTypes;
- (void)reportPostCFUEvent:(id)a0;
- (id)creationDateOfOldestFollowUpWithIdentifiers:(id)a0;
- (void)pendingFollowUpWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)dismissFollowUpWithIdentifier:(id)a0 forAccount:(id)a1 completion:(id /* block */)a2;
- (void)_dismissFollowUpWithIdentifiers:(id)a0 completion:(id /* block */)a1;
- (id)_followUpForRecoveryKeyHealingWithContext:(id)a0;
- (BOOL)postFollowUpWithIdentifier:(id)a0 userInfo:(id)a1 error:(id *)a2;
- (id)_recoveryNotificationWithInfo:(id)a0 type:(id)a1;
- (double)ageOfOldestCustodianCFU;
- (id)_followUpForRecoveryKeyMismatchWithContext:(id)a0;
- (BOOL)dismissFollowUpWithIdentifier:(id)a0 error:(id *)a1;
- (void)pendingFollowUpItemUserInfosWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)pendingFollowUpItemUserInfosWithIdentifier:(id)a0;
- (id)_followUpForOctagonDistrustedRecoveryKeyWithContext:(id)a0;
- (id)_followUpItemForCustodianRemoved:(id)a0;
- (id)_followUpItemForCustodianReview:(id)a0;
- (id)_followUpItemForCustodianWalrusRemoved:(id)a0;
- (id)_followUpItemForRenewCredentials:(id)a0;
- (void)postFollowUpWithIdentifier:(id)a0 userInfo:(id)a1 completion:(id /* block */)a2;
- (void)pendingFollowUpsForAccount:(id)a0 completion:(id /* block */)a1;
- (id)_turnOffRecoveryKeyActionWithUserInfo:(id)a0;
- (id)_followupActionUserInfo:(id)a0;
- (BOOL)isRenewCredentialsCFUPosted;
- (id)_addRecoveryKeyActionForIdentifier:(id)a0;
- (id)_custodianReviewNotification:(id)a0;
- (void)dismissFollowUpsForAccount:(id)a0 identifiers:(id)a1 completion:(id /* block */)a2;
- (id)followUpItemForIdentifier:(id)a0 userInfo:(id)a1;
- (void)_pendingFollowUpItemsWithIdentifier:(id)a0 forAccount:(id)a1 completion:(id /* block */)a2;
- (void)dismissFollowUpWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)_followUpItemForVerifyTerms:(id)a0;

@end
