@class NSTimer, NSMutableDictionary, BiometricAutoBugCapture;

@interface EntitlementABCIssueReporter : NSObject

@property (retain, nonatomic) NSMutableDictionary *issues;
@property (retain, nonatomic) NSTimer *timer;
@property (weak, nonatomic) BiometricAutoBugCapture *biometricABC;

- (void).cxx_destruct;
- (void)addIssue:(id)a0;
- (void)rescheduleTimer;
- (id)initWithBiometricABC:(id)a0;
- (id)issueForTag:(id)a0;
- (void)reportLegacyClient:(id)a0;
- (void)reportMissingPermission:(int)a0 forClientName:(id)a1;
- (void)rescheduleTimerMain;

@end
