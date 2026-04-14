@interface CHMetrics : NSObject

- (void)dealloc;
- (id)initWithEngine:(id)a0 audioSessionID:(unsigned int)a1 sessionIsShared:(BOOL)a2 isSPI:(BOOL)a3;
- (void)handleServerRecovery;
- (void)handleEngineStart;
- (void)handleEngineStop;
- (void)handleParamCurveEncountered;
- (void)handleInitForPlayer:(id)a0 events:(id)a1 isAdvanced:(BOOL)a2 patternID:(id)a3;
- (void)handleStartForPlayer:(id)a0 time:(double)a1 isAdvanced:(BOOL)a2 patternID:(id)a3;
- (void)handleActionForPlayer:(id)a0 action:(long long)a1 time:(double)a2 isAdvanced:(BOOL)a3;
- (void)handleFinishedForPlayersAtTime:(double)a0;

@end
