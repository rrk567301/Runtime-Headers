@class NSCondition;

@interface ASDTPMAction : ASDTPMDevice

@property (nonatomic) int executeTransition;
@property (nonatomic) int backgroundTransition;
@property (nonatomic) BOOL once;
@property (retain, nonatomic) NSCondition *condition;
@property (nonatomic) int actionState;
@property (nonatomic) int actionResult;
@property (nonatomic) unsigned int actionIteration;

- (void).cxx_destruct;
- (int)action;
- (int)executeAction:(unsigned int)a0;
- (id)initWithConfig:(id)a0 forSequencer:(id)a1;
- (void)executeInBackground;
- (BOOL)asdtHandlesPowerTransition:(int)a0;
- (int)asdtPowerStateChange:(int)a0;
- (int)waitForCompletion:(unsigned int)a0;

@end
