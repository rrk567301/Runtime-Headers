@class SUPowerAssertionManager;

@interface SUOSUTonightObserver : SUOSULaterObserver

@property char installTaskSuccessfullyFired;
@property (retain) SUPowerAssertionManager *powerAssertionManager;

- (void).cxx_destruct;
- (void)_scheduleCancellationTask;
- (void)_scheduleInstallTask;
- (id)_stringFromDate:(id)a0;
- (void)armObserver;
- (void)disarmLaterObserver;

@end
