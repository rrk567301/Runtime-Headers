@interface BWSourceNode : BWNode

@property int sourceStartState;
@property (readonly, nonatomic) struct OpaqueCMClock { } *clock;

+ (void)initialize;

- (BOOL)stop:(id *)a0;
- (id)nodeType;
- (void)makeOutputsLiveIfNeeded;
- (BOOL)start:(id *)a0;
- (void)transitionStateForMakeOutputsLiveIfNeeded;
- (BOOL)transitionToStartedState:(id *)a0;
- (BOOL)transitionToStoppedState:(id *)a0;
- (void)willStartDeferred;

@end
