@interface SUOSUCustomTimeObserver : SUOSULaterObserver

- (id)initWithDelegate:(id)a0;
- (void)_handleAlarmFired:(id)a0;
- (void)armObserverWithDate:(id)a0;
- (void)disarmLaterObserver;
- (void)armObserver;

@end
