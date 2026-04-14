@interface AKCDPFactory : NSObject

+ (id)context;
+ (id)contextWithAuthResults:(id)a0;
+ (id)stateControllerWithContext:(id)a0;
+ (id)recoveryControllerWithContext:(id)a0;
+ (id)followUpRepairContext;
+ (id)followUpController;
+ (BOOL)cdpAccountIsICDPEnabledForDSID:(id)a0;
+ (id)cdpErrorDomain;
+ (id)cdpIDMSRecordMIDKey;
+ (id)cdpIDMSRecordPRKKey;
+ (id)accountRecoveryControllerWithPresentingViewController:(id)a0;
+ (id)cdpStateUIController;
+ (id)cdpUIControllerWithPresentingViewController:(id)a0;

@end
