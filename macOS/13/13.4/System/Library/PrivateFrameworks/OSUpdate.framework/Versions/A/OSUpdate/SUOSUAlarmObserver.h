@interface SUOSUAlarmObserver : SUOSULaterObserver

- (id)initWithDelegate:(id)a0;
- (void)_handleAlarmFired:(id)a0;
- (void)armObserver;
- (void)disarmLaterObserver;

@end
