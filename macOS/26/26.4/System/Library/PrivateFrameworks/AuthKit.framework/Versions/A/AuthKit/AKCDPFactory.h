@interface AKCDPFactory : NSObject

+ (id)contextForAltDSID:(id)a0;
+ (id)followUpRepairContext;
+ (id)contextWithAuthResults:(id)a0;
+ (id)cdpUIControllerWithPresentingViewController:(id)a0;
+ (id)cdpStateUIController;
+ (id)walrusStatusLiveValue;
+ (BOOL)cdpAccountIsHSA2EnabledForAltDSID:(id)a0;
+ (BOOL)isWebAccessEnabled;
+ (void)generatePDPBlobWithContext:(id)a0 completion:(id /* block */)a1;
+ (BOOL)cdpAccountIsOTEnabledForAltDSID:(id)a0;
+ (id)webAccessStatusLiveValue;
+ (id)cdpIDMSRecordMIDKey;
+ (id)accountRecoveryControllerWithPresentingViewController:(id)a0;
+ (id)cdpErrorDomain;
+ (BOOL)isEligibleToArmDeviceForPCSAuth;
+ (BOOL)cdpAccountIsICDPEnabledForDSID:(id)a0;
+ (id)cdpIDMSRecordPRKKey;
+ (BOOL)isWalrusEnabled;
+ (id)webAccessChangeControllerForTargetStatus:(unsigned long long)a0;
+ (id)stateControllerWithContext:(id)a0;
+ (id)recoveryControllerWithContext:(id)a0;
+ (unsigned long long)webAccessStatus;
+ (unsigned long long)walrusStatus;
+ (id)followUpController;

- (BOOL)isCDPEnabledForDSID:(id)a0;
- (BOOL)isHSA2EnabledForAltDSID:(id)a0;
- (BOOL)isManateeAvailable;
- (BOOL)isUserVisibleKeychainSyncEnabled;

@end
