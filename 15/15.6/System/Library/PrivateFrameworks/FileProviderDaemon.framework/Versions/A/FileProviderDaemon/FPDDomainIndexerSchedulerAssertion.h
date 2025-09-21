@class NSString, FPDProcessMonitor;

@interface FPDDomainIndexerSchedulerAssertion : NSObject <FPDProcessMonitorDelegate, FPIndexingAssertion> {
    FPDProcessMonitor *_monitor;
    int _pid;
    char _forceForeground;
    id /* block */ _unregisterForceRunning;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (id)initWithPID:(int)a0 forceForeground:(char)a1;
- (void)processMonitor:(id)a0 didBecomeForeground:(char)a1;

@end
