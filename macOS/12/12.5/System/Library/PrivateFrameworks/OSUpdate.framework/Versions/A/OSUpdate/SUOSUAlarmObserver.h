@interface SUOSUAlarmObserver : SUOSULaterObserver

- (id)initWithDelegate:(id)a0;
- (void)_handleAlarmFired:(id)a0;
- (void)disarmLaterObserver;
- (void)armObserver;

@end
