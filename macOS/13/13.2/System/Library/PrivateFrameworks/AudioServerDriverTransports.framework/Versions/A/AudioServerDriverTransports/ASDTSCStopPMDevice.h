@interface ASDTSCStopPMDevice : ASDTPMAction

@property (nonatomic) int direction;

- (int)action;
- (id)initWithConfig:(id)a0 forSequencer:(id)a1;
- (int)stopForDevice:(id)a0;

@end
