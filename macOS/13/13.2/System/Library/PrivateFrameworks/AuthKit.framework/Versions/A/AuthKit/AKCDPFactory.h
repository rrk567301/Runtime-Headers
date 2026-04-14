@interface AKCDPFactory : NSObject

+ (id)context;
+ (unsigned long long)walrusStatus;
+ (id)contextWithAuthResults:(id)a0;
+ (id)stateControllerWithContext:(id)a0;
+ (id)recoveryControllerWithContext:(id)a0;
+ (id)followUpRepairContext;
+ (id)followUpController;
+ (BOOL)cdpAccountIsICDPEnabledForDSID:(id)a0;
+ (BOOL)cdpAccountIsOTEnabledForAltDSID:(id)a0;
+ (id)cdpErrorDomain;
+ (id)walrusStatusFuture;
+ (BOOL)isWalrusEnabled;
+ (unsigned long long)webAccessStatus;
+ (id)webAccessStatusFuture;
+ (BOOL)isWebAccessEnabled;
+ (BOOL)isEligibleToArmDeviceForPCSAuth;
+ (id)webAccessChangeControllerForTargetStatus:(unsigned long long)a0;
+ (id)cdpIDMSRecordMIDKey;
+ (id)cdpIDMSRecordPRKKey;
+ (id)accountRecoveryControllerWithPresentingViewController:(id)a0;
+ (id)cdpStateUIController;
+ (id)cdpUIControllerWithPresentingViewController:(id)a0;

@end
