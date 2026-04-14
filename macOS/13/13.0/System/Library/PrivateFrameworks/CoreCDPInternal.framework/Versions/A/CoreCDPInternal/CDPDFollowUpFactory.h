@interface CDPDFollowUpFactory : NSObject

+ (id)contextToIdentifierMap;

- (BOOL)_supportsFaceID;
- (unsigned long long)secretType;
- (id)identifierForContext:(id)a0;
- (id)followUpItemWithContext:(id)a0;
- (id)_followUpForOfflineSecretChangeWithContext:(id)a0;
- (id)_offlineSecretChangeFollowUpAction;
- (id)_followUpForSecureTermsWithContext:(id)a0;
- (id)_secureTermsFollowUpAction;
- (id)_followUpForConfirmExistingSecretWithContext:(id)a0;
- (id)_confirmExistingSecretFollowUpAction;
- (id)_followUpForRepairWithContext:(id)a0;
- (id)_followUpActionForRepair;
- (id)_followUpForRecoveryKeyRepairWithContext:(id)a0;
- (id)_followUpActionForRecoveryKeyRepair;
- (id)_followUpForSettingUpBiometricsWithContext:(id)a0;
- (id)_baseFollowUpItemWithContext:(id)a0;
- (id)_localizedStringForKey:(id)a0;
- (id)_userInfoForPrefPaneWithCommandKey:(id)a0;
- (BOOL)_isBiometricAuthEnrolled;
- (BOOL)_isManateeAvailableForAltDSID:(id)a0;
- (BOOL)_isManateeAvailable;
- (BOOL)_isBiometricCapable;
- (id)_deviceCapabilityProvider;

@end
