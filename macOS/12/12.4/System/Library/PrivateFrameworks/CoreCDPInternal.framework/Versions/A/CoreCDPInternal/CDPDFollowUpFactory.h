@interface CDPDFollowUpFactory : NSObject

+ (id)contextToIdentifierMap;

- (BOOL)_supportsFaceID;
- (unsigned long long)secretType;
- (id)followUpItemWithContext:(id)a0;
- (id)identifierForContext:(id)a0;
- (id)_followUpForRepairWithContext:(id)a0;
- (id)_followUpForOfflineSecretChangeWithContext:(id)a0;
- (id)_followUpForRecoveryKeyRepairWithContext:(id)a0;
- (id)_followUpForSettingUpBiometricsWithContext:(id)a0;
- (id)_followUpForSecureTermsWithContext:(id)a0;
- (id)_followUpForConfirmExistingSecretWithContext:(id)a0;
- (id)_baseFollowUpItemWithContext:(id)a0;
- (id)_offlineSecretChangeFollowUpAction;
- (id)_secureTermsFollowUpAction;
- (id)_confirmExistingSecretFollowUpAction;
- (BOOL)_isManateeAvailable;
- (id)_followUpActionForRepair;
- (id)_followUpActionForRecoveryKeyRepair;
- (id)_localizedStringForKey:(id)a0;
- (id)_userInfoForPrefPaneWithCommandKey:(id)a0;
- (BOOL)_isBiometricAuthEnrolled;
- (BOOL)_isBiometricCapable;

@end
