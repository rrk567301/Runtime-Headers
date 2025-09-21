@class MechanismBase, NSString, NSObject;
@protocol OS_os_log;

@interface MechanismAssertion : NSObject {
    NSString *_mechanismInitialDescription;
    char _acquired;
    char _monitoring;
}

@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (readonly, weak, nonatomic) MechanismBase *mechanism;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)startMonitoring;
- (void)stopMonitoring;
- (id)additionalDescription;
- (void)dropWithReason:(id)a0;
- (id)_assertInStateAndStartMonitoring;
- (void)_startMonitoringIfNeeded;
- (void)_stopMonitoringIfNeeded;
- (char)acquireWithReason:(id)a0 error:(id *)a1;
- (id)assertInState;
- (void)handleAssertionFailureWithReason:(id)a0 error:(id)a1;
- (void)handleAssertionSuccessWithReason:(id)a0;
- (id)initWithMechanism:(id)a0;

@end
