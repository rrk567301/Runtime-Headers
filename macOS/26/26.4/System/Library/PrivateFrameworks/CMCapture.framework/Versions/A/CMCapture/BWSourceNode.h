@interface BWSourceNode : BWNode

@property int sourceStartState;
@property (readonly, nonatomic) struct OpaqueCMClock { } *clock;

+ (void)initialize;

- (BOOL)start:(id *)a0;
- (BOOL)stop:(id *)a0;
- (void)makeOutputsLiveIfNeeded;
- (id)nodeType;
- (void)transitionStateForMakeOutputsLiveIfNeeded;
- (BOOL)transitionToStartedState:(id *)a0;
- (BOOL)transitionToStoppedState:(id *)a0;
- (void)willStartDeferred;

@end
