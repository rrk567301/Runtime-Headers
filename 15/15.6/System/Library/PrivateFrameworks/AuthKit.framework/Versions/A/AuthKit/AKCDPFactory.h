@interface AKCDPFactory : NSObject

+ (unsigned long long)walrusStatus;
+ (char)cdpAccountIsICDPEnabledForDSID:(id)a0;
+ (char)isEligibleToArmDeviceForPCSAuth;
+ (char)isWalrusEnabled;
+ (unsigned long long)webAccessStatus;
+ (id)accountRecoveryControllerWithPresentingViewController:(id)a0;
+ (char)cdpAccountIsHSA2EnabledForAltDSID:(id)a0;
+ (char)cdpAccountIsOTEnabledForAltDSID:(id)a0;
+ (id)cdpErrorDomain;
+ (id)cdpIDMSRecordMIDKey;
+ (id)cdpIDMSRecordPRKKey;
+ (id)cdpStateUIController;
+ (id)cdpUIControllerWithPresentingViewController:(id)a0;
+ (id)contextForAltDSID:(id)a0;
+ (id)contextWithAuthResults:(id)a0;
+ (id)followUpController;
+ (id)followUpRepairContext;
+ (char)isWebAccessEnabled;
+ (id)recoveryControllerWithContext:(id)a0;
+ (id)stateControllerWithContext:(id)a0;
+ (id)walrusStatusLiveValue;
+ (id)webAccessChangeControllerForTargetStatus:(unsigned long long)a0;
+ (id)webAccessStatusLiveValue;

- (char)isCDPEnabledForDSID:(id)a0;
- (char)isHSA2EnabledForAltDSID:(id)a0;
- (char)isManateeAvailable;
- (char)isUserVisibleKeychainSyncEnabled;

@end
