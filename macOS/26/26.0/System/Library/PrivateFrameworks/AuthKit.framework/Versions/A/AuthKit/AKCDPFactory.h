@interface AKCDPFactory : NSObject

+ (id)followUpController;
+ (id)contextForAltDSID:(id)a0;
+ (id)webAccessStatusLiveValue;
+ (unsigned long long)walrusStatus;
+ (BOOL)cdpAccountIsICDPEnabledForDSID:(id)a0;
+ (BOOL)cdpAccountIsOTEnabledForAltDSID:(id)a0;
+ (id)webAccessChangeControllerForTargetStatus:(unsigned long long)a0;
+ (unsigned long long)webAccessStatus;
+ (BOOL)cdpAccountIsHSA2EnabledForAltDSID:(id)a0;
+ (id)followUpRepairContext;
+ (id)cdpErrorDomain;
+ (id)cdpUIControllerWithPresentingViewController:(id)a0;
+ (id)stateControllerWithContext:(id)a0;
+ (id)cdpIDMSRecordMIDKey;
+ (id)accountRecoveryControllerWithPresentingViewController:(id)a0;
+ (id)recoveryControllerWithContext:(id)a0;
+ (id)walrusStatusLiveValue;
+ (BOOL)isEligibleToArmDeviceForPCSAuth;
+ (BOOL)isWebAccessEnabled;
+ (id)cdpIDMSRecordPRKKey;
+ (BOOL)isWalrusEnabled;
+ (id)contextWithAuthResults:(id)a0;
+ (id)cdpStateUIController;

- (BOOL)isCDPEnabledForDSID:(id)a0;
- (BOOL)isHSA2EnabledForAltDSID:(id)a0;
- (BOOL)isManateeAvailable;
- (BOOL)isUserVisibleKeychainSyncEnabled;

@end
