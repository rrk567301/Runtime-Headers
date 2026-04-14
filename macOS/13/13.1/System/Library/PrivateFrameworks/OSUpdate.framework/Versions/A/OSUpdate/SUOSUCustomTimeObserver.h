@interface SUOSUCustomTimeObserver : SUOSULaterObserver

- (id)initWithDelegate:(id)a0;
- (void)armObserver;
- (void)armObserverWithDate:(id)a0;
- (void)disarmLaterObserver;
- (void)_handleAlarmFired:(id)a0;

@end
