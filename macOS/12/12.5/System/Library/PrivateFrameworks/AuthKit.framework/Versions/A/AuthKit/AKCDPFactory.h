@interface AKCDPFactory : NSObject

+ (id)context;
+ (id)recoveryControllerWithContext:(id)a0;
+ (id)cdpIDMSRecordPRKKey;
+ (id)cdpIDMSRecordMIDKey;
+ (id)cdpErrorDomain;
+ (id)contextWithAuthResults:(id)a0;
+ (id)stateControllerWithContext:(id)a0;
+ (id)followUpRepairContext;
+ (id)followUpController;
+ (BOOL)cdpAccountIsICDPEnabledForDSID:(id)a0;
+ (id)accountRecoveryControllerWithPresentingViewController:(id)a0;
+ (id)cdpStateUIController;
+ (id)cdpUIControllerWithPresentingViewController:(id)a0;

@end
