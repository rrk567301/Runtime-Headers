@class LAEnvironment;

@interface CDPDFollowUpFactory : NSObject

@property (retain, nonatomic) LAEnvironment *currentUser;

+ (id)contextToIdentifierMap;

- (id)_offlineSecretChangeFollowUpAction;
- (id)_followUpForRecoveryKeyRepairWithContext:(id)a0;
- (BOOL)_isWalrusEnabled;
- (id)_followUpForConfirmExistingSecretWithContext:(id)a0;
- (BOOL)_isBiometricAuthEnrolled;
- (id)_followUpActionForRecoveryKeyRepair;
- (id)_followUpItemForPDPOnlyRepairWithContext:(id)a0;
- (BOOL)_isBiometricAuthEnrolledWithLAEnvironment:(id)a0;
- (id)_localizedStringForKey:(id)a0;
- (id)_baseFollowUpNotificationWithContext:(id)a0;
- (void)_configureRepairFollowUpItem:(id)a0;
- (id)_secureTermsFollowUpAction;
- (id)_followUpItemForRecoveryKeyMismatchHealing:(id)a0;
- (id)_adpStateHealingFollowUpAction;
- (id)_createPasscodeDismissNoteFollowUpAction;
- (id)_followUpForRepairWithContext:(id)a0;
- (void)_configureWalrusRepairFollowUpItem:(id)a0;
- (BOOL)_isManateeAvailable;
- (BOOL)_supportsFaceID;
- (id)followUpItemWithContext:(id)a0;
- (id)_followUpForSecureTermsWithContext:(id)a0;
- (void)_configureConfirmExistingSecretFollowUpItem:(id)a0;
- (id)identifierForContext:(id)a0;
- (id)_userInfoForPrefPaneWithCommandKey:(id)a0;
- (void).cxx_destruct;
- (id)_followUpForSettingUpBiometricsWithContext:(id)a0;
- (id)_anyRecoveryKeysAreDistrusted;
- (unsigned long long)_approvedCustodianCountForAltDSID:(id)a0;
- (id)_deviceCapabilityProvider;
- (id)_followUpForOfflineSecretChangeWithContext:(id)a0;
- (id)_baseFollowUpItemWithContext:(id)a0;
- (id)_followUpForADPStateHealingWithContext:(id)a0;
- (BOOL)_isManateeAvailableForAltDSID:(id)a0;
- (id)_createPasscodeNoteFollowUpAction;
- (id)_followUpItemForWalrusCreatePasscodeWithContext:(id)a0;
- (BOOL)_isBiometricCapable;
- (id)_confirmExistingSecretFollowUpAction;
- (id)_createPasscodeFollowUpAction;
- (id)_followUpItemForSOSCompatibilityMode:(id)a0;
- (unsigned long long)secretType;

@end
