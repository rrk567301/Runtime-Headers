@class NSArray, NSString;

@interface CDPDRecoveryValidatedJoinFlowController : CDPDRecoveryFlowController <CDPDRemoteDeviceSecretValidatorDelegate>

@property (retain, nonatomic) NSArray *cdpDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_entryLimitSignInBodyForDevice:(id)a0;
- (void)_showQuotaScreenWithCompletion:(id /* block */)a0;
- (id)_accountResetRecoveryOptionWithCompletion:(id /* block */)a0;
- (void)_addEDPEscapeOfferIfNeededToValidator:(id)a0 nonCancelCompletion:(id /* block */)a1;
- (id)_cancelRecoveryOptionWithCompletion:(id /* block */)a0;
- (id)_custodianRecoveryOptionWithCompletion:(id /* block */)a0;
- (id)_deviceSelectionRecoveryOptionWithCompletion:(id /* block */)a0;
- (id)_edpRecoveryTokenOptionWithCompletion:(id /* block */)a0;
- (id)_entryHardLimitEDPRecoveryTokenAvailableBodyForDevice:(id)a0;
- (id)_entryLimitCustodianRecoveryAvailableBodyForDevice:(id)a0;
- (id)_entryLimitDeviceSelectionAvailableBodyForDevice:(id)a0;
- (id)_entryLimitNoResetForRepairForDevice:(id)a0;
- (id)_entryLimitPiggybackingAvailableBodyForDevice:(id)a0;
- (id)_entryLimitRecoveryKeyAvailableBodyForDevice:(id)a0;
- (id)_entryLimitResetAvailableBodyForDevice:(id)a0;
- (id)_entryLimitTitleForDevice:(id)a0;
- (void)_escapeOfferForDevices:(id)a0 remoteApproval:(char)a1 forMultipleICSC:(char)a2 completion:(id /* block */)a3;
- (id)_fallbackRecoveryOptionsForLimitType:(unsigned long long)a0 withCompletion:(id /* block */)a1;
- (void)_handleHardLimitErrorForCurrentContextWithDevice:(id)a0 completion:(id /* block */)a1;
- (void)_handleLimit:(unsigned long long)a0 forDevice:(id)a1 completion:(id /* block */)a2;
- (void)_handleNoRecoveryFactorsWithMask:(unsigned long long)a0 validator:(id)a1;
- (void)_handleResetOptionWithResetRequested:(char)a0 localSecret:(id)a1 validator:(id)a2;
- (void)_handleSoftLimitErrorForCurrentContextWithDevice:(id)a0 completion:(id /* block */)a1;
- (id)_infoDictionaryWithTitle:(id)a0 andBody:(id)a1;
- (char)_isProbationActive;
- (char)_isWalrusEnabled;
- (id)_limitErrorBodyForDevice:(id)a0 limitType:(unsigned long long)a1;
- (id)_piggybackingRecoveryOptionWithCompletion:(id /* block */)a0;
- (void)_populateUserInfo:(id)a0 recoveryIndexHandlers:(id)a1 withRecoveryOptions:(id)a2;
- (id)_recoveryKeyRecoveryOptionWithCompletion:(id /* block */)a0;
- (id)_recoveryMethodRecoveryOptionWithCompletion:(id /* block */)a0;
- (id)_resetDataErrorForCurrentContextWithRecoveryIndexMap:(id)a0;
- (id)_resetProtectedDataErrorUnrecoverable;
- (void)_shouldOfferEDPRecoveryTokenBasedRecoveryWithCompletion:(id /* block */)a0;
- (void)_showAccountResetConfirmationWithCompletion:(id /* block */)a0;
- (void)_showAlertWithError:(id)a0;
- (void)_showEntryLimitError:(id)a0 withRecoveryOptionHandlers:(id)a1 defaultIndex:(long long)a2 completion:(id /* block */)a3;
- (id)_skipErrorUnrecoverable;
- (id)_skipSignInRecoveryOptionWithCompletion:(id /* block */)a0;
- (id)_tryAgainLaterOptionWithCompletion:(id /* block */)a0;
- (id)_userInfoForLimit:(unsigned long long)a0 withDevice:(id)a1;
- (void)beginInteractiveRecoveryForDevices:(id)a0 isUsingMultipleICSC:(char)a1 usingValidator:(id)a2;
- (void)cancelRemoteSecretValidatorApplicationToJoinCircle:(id)a0;
- (void)recoveryValidatorWithDevices:(id)a0 forMultipleICSC:(char)a1 validationHandler:(id /* block */)a2 completion:(id /* block */)a3;
- (void)remoteSecretValidator:(id)a0 applyToJoinCircleWithJoinHandler:(id /* block */)a1;
- (void)remoteSecretValidator:(id)a0 attemptCircleJoinWithPiggybackingContext:(id)a1 completion:(id /* block */)a2;
- (void)remoteSecretValidator:(id)a0 attemptCustodianRecoveryWithInfo:(id)a1 completion:(id /* block */)a2;
- (void)secretValidator:(id)a0 didFailRecovery:(id)a1 withError:(id)a2 completion:(id /* block */)a3;
- (void)secretValidator:(id)a0 recoverSecureBackupWithContext:(id)a1 completion:(id /* block */)a2;
- (char)secretValidator:(id)a0 shouldAcceptRecoveryError:(id *)a1;
- (void)secretValidatorWillAttemptRecovery;
- (char)shouldOfferPiggybackingBasedRecovery;

@end
