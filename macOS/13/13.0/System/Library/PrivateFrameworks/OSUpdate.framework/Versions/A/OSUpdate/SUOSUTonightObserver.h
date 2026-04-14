@class SUPowerAssertionManager;

@interface SUOSUTonightObserver : SUOSULaterObserver

@property BOOL installTaskSuccessfullyFired;
@property (retain) SUPowerAssertionManager *powerAssertionManager;

- (void).cxx_destruct;
- (void)armObserver;
- (void)disarmLaterObserver;
- (void)_scheduleInstallTask;
- (void)_scheduleCancellationTask;
- (id)_stringFromDate:(id)a0;

@end
