@class NSString, CDPDPCSController, CDPContext;
@protocol CDPStateUIProviderInternal, CDPDAuthProviderInternal;

@interface CDPDPDPRecoveryController : NSObject <CDPDPDPRecoveryControl, CDPDDeviceSecretValidatorDelegate>

@property (retain, nonatomic) CDPDPCSController *pcsController;
@property (retain, nonatomic) CDPContext *cdpContext;
@property (retain, nonatomic) id<CDPStateUIProviderInternal> uiProvider;
@property (retain, nonatomic) id<CDPDAuthProviderInternal> authProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)repairPDPStateWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)secretValidator:(id)a0 didRequestRepairPDPStateWithContext:(id)a1 completion:(id /* block */)a2;
- (void)_clearAllPDPFollowUps;
- (void)_clearPDPFollowUp;
- (id)_getAppleAccountForAltDSID:(id)a0;
- (void)_interactiveRepairWithCompletion:(id /* block */)a0;
- (id)_pdpAttemptsRemainingPrimaryForAccount:(id)a0;
- (id)_pdpAttemptsRemainingRecoveryForAccount:(id)a0;
- (id)_pdpHealthPrimaryForAccount:(id)a0;
- (id)_pdpHealthRecoveryForAccount:(id)a0;
- (id)_pdpPVMatchesForAccount:(id)a0;
- (void)_postRepairPDPCDPFollowUp;
- (void)_refreshContextWithSilentAuthWithCompletion:(id /* block */)a0;
- (void)_refreshedPDPStateWithCompletion:(id /* block */)a0;
- (void)_silentPasswordChangeWithCompletion:(id /* block */)a0;
- (unsigned long long)_updatePDPStateOnContextFromRawState:(id)a0;
- (void)clearCDPPDPFollowUp;
- (void)createPDPLivenessDictionaryWithCompletion:(id /* block */)a0;
- (id)initWithContext:(id)a0 uiProvider:(id)a1 authProvider:(id)a2 pcsController:(id)a3;
- (void)pdpHealthIgnoringErrorWithCompletion:(id /* block */)a0;
- (void)performInteractivePDPRepairWithCompletion:(id /* block */)a0;
- (void)processADPDisablement;
- (void)secretValidator:(id)a0 didRequestValidatePDPIdentitiesWithContext:(id)a1 completion:(id /* block */)a2;
- (void)secretValidator:(id)a0 recoverSecureBackupWithContext:(id)a1 completion:(id /* block */)a2;
- (BOOL)secretValidator:(id)a0 shouldContinueValidationAfterError:(id)a1;
- (void)secretValidator:(id)a0 validateRecoveryKeyWithContext:(id)a1 completion:(id /* block */)a2;
- (void)setupPDPStateWithCompletion:(id /* block */)a0;
- (void)silentlyRepairPDPStateWithCompletion:(id /* block */)a0;
- (void)validatePDPIdentitiesWithCompletion:(id /* block */)a0;

@end
