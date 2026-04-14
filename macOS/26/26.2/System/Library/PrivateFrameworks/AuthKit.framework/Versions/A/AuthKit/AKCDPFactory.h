@interface AKCDPFactory : NSObject

+ (id)contextWithAuthResults:(id)a0;
+ (unsigned long long)walrusStatus;
+ (id)stateControllerWithContext:(id)a0;
+ (BOOL)cdpAccountIsOTEnabledForAltDSID:(id)a0;
+ (id)contextForAltDSID:(id)a0;
+ (id)followUpRepairContext;
+ (id)cdpErrorDomain;
+ (id)cdpStateUIController;
+ (id)webAccessChangeControllerForTargetStatus:(unsigned long long)a0;
+ (id)walrusStatusLiveValue;
+ (id)cdpUIControllerWithPresentingViewController:(id)a0;
+ (BOOL)isWalrusEnabled;
+ (id)cdpIDMSRecordMIDKey;
+ (id)accountRecoveryControllerWithPresentingViewController:(id)a0;
+ (BOOL)cdpAccountIsHSA2EnabledForAltDSID:(id)a0;
+ (id)webAccessStatusLiveValue;
+ (id)recoveryControllerWithContext:(id)a0;
+ (id)followUpController;
+ (BOOL)isWebAccessEnabled;
+ (BOOL)cdpAccountIsICDPEnabledForDSID:(id)a0;
+ (unsigned long long)webAccessStatus;
+ (BOOL)isEligibleToArmDeviceForPCSAuth;
+ (id)cdpIDMSRecordPRKKey;

- (BOOL)isCDPEnabledForDSID:(id)a0;
- (BOOL)isHSA2EnabledForAltDSID:(id)a0;
- (BOOL)isManateeAvailable;
- (BOOL)isUserVisibleKeychainSyncEnabled;

@end
