@class LAEnvironment;

@interface CDPDFollowUpFactory : NSObject

@property (retain, nonatomic) LAEnvironment *currentUser;

+ (id)contextToIdentifierMap;

- (BOOL)_isManateeAvailable;
- (id)_followUpItemForRecoveryKeyMismatchHealing:(id)a0;
- (id)_offlineSecretChangeFollowUpAction;
- (id)_userInfoForPrefPaneWithCommandKey:(id)a0;
- (id)_anyRecoveryKeysAreDistrusted;
- (id)_followUpItemForPDPOnlyRepairWithContext:(id)a0;
- (BOOL)_isBiometricAuthEnrolled;
- (BOOL)_supportsFaceID;
- (void)_configureConfirmExistingSecretFollowUpItem:(id)a0;
- (id)_followUpForConfirmExistingSecretWithContext:(id)a0;
- (id)_followUpItemForSOSCompatibilityMode:(id)a0;
- (id)_baseFollowUpNotificationWithContext:(id)a0;
- (id)_followUpForADPStateHealingWithContext:(id)a0;
- (id)_followUpForRepairWithContext:(id)a0;
- (id)_createPasscodeFollowUpAction;
- (BOOL)_isBiometricCapable;
- (unsigned long long)secretType;
- (id)_baseFollowUpItemWithContext:(id)a0;
- (id)_createPasscodeNoteFollowUpAction;
- (void).cxx_destruct;
- (id)_deviceCapabilityProvider;
- (id)_secureTermsFollowUpAction;
- (id)_followUpForSecureTermsWithContext:(id)a0;
- (id)followUpItemWithContext:(id)a0;
- (void)_configureRepairFollowUpItem:(id)a0;
- (BOOL)_isManateeAvailableForAltDSID:(id)a0;
- (unsigned long long)_approvedCustodianCountForAltDSID:(id)a0;
- (id)_followUpForOfflineSecretChangeWithContext:(id)a0;
- (id)_followUpForSettingUpBiometricsWithContext:(id)a0;
- (id)identifierForContext:(id)a0;
- (id)_localizedStringForKey:(id)a0;
- (BOOL)_isBiometricAuthEnrolledWithLAEnvironment:(id)a0;
- (void)_configureWalrusRepairFollowUpItem:(id)a0;
- (id)_followUpForRecoveryKeyRepairWithContext:(id)a0;
- (id)_followUpActionForRecoveryKeyRepair;
- (id)_followUpItemForWalrusCreatePasscodeWithContext:(id)a0;
- (BOOL)_isWalrusEnabled;
- (id)_confirmExistingSecretFollowUpAction;
- (id)_createPasscodeDismissNoteFollowUpAction;
- (id)_adpStateHealingFollowUpAction;

@end
