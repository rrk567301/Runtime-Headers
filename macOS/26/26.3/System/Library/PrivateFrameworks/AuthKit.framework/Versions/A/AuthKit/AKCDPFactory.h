@interface AKCDPFactory : NSObject

+ (BOOL)isEligibleToArmDeviceForPCSAuth;
+ (BOOL)isWebAccessEnabled;
+ (id)cdpUIControllerWithPresentingViewController:(id)a0;
+ (id)walrusStatusLiveValue;
+ (BOOL)cdpAccountIsHSA2EnabledForAltDSID:(id)a0;
+ (BOOL)cdpAccountIsOTEnabledForAltDSID:(id)a0;
+ (id)followUpController;
+ (BOOL)cdpAccountIsICDPEnabledForDSID:(id)a0;
+ (id)webAccessStatusLiveValue;
+ (id)contextForAltDSID:(id)a0;
+ (id)cdpErrorDomain;
+ (id)accountRecoveryControllerWithPresentingViewController:(id)a0;
+ (id)cdpIDMSRecordPRKKey;
+ (id)contextWithAuthResults:(id)a0;
+ (BOOL)isWalrusEnabled;
+ (id)cdpIDMSRecordMIDKey;
+ (unsigned long long)walrusStatus;
+ (id)followUpRepairContext;
+ (id)recoveryControllerWithContext:(id)a0;
+ (id)webAccessChangeControllerForTargetStatus:(unsigned long long)a0;
+ (id)cdpStateUIController;
+ (id)stateControllerWithContext:(id)a0;
+ (unsigned long long)webAccessStatus;

- (BOOL)isCDPEnabledForDSID:(id)a0;
- (BOOL)isHSA2EnabledForAltDSID:(id)a0;
- (BOOL)isManateeAvailable;
- (BOOL)isUserVisibleKeychainSyncEnabled;

@end
