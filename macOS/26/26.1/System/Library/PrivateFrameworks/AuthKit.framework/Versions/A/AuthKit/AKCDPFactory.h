@interface AKCDPFactory : NSObject

+ (id)followUpController;
+ (id)accountRecoveryControllerWithPresentingViewController:(id)a0;
+ (id)recoveryControllerWithContext:(id)a0;
+ (id)cdpStateUIController;
+ (BOOL)isEligibleToArmDeviceForPCSAuth;
+ (id)walrusStatusLiveValue;
+ (BOOL)cdpAccountIsHSA2EnabledForAltDSID:(id)a0;
+ (unsigned long long)walrusStatus;
+ (id)followUpRepairContext;
+ (BOOL)cdpAccountIsOTEnabledForAltDSID:(id)a0;
+ (BOOL)isWebAccessEnabled;
+ (id)contextWithAuthResults:(id)a0;
+ (id)cdpErrorDomain;
+ (id)contextForAltDSID:(id)a0;
+ (BOOL)isWalrusEnabled;
+ (id)webAccessChangeControllerForTargetStatus:(unsigned long long)a0;
+ (BOOL)cdpAccountIsICDPEnabledForDSID:(id)a0;
+ (id)webAccessStatusLiveValue;
+ (unsigned long long)webAccessStatus;
+ (id)stateControllerWithContext:(id)a0;
+ (id)cdpUIControllerWithPresentingViewController:(id)a0;
+ (id)cdpIDMSRecordPRKKey;
+ (id)cdpIDMSRecordMIDKey;

- (BOOL)isCDPEnabledForDSID:(id)a0;
- (BOOL)isHSA2EnabledForAltDSID:(id)a0;
- (BOOL)isManateeAvailable;
- (BOOL)isUserVisibleKeychainSyncEnabled;

@end
