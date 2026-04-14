@interface SUOSUCustomTimeObserver : SUOSULaterObserver

- (id)initWithDelegate:(id)a0;
- (void)_handleAlarmFired:(id)a0;
- (void)armObserver;
- (void)armObserverWithDate:(id)a0;
- (void)disarmLaterObserver;

@end
