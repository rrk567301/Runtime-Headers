@interface BWSourceNode : BWNode

@property (readonly, nonatomic) struct OpaqueCMClock { } *clock;

- (id)nodeType;
- (void)makeOutputsLiveIfNeeded;
- (BOOL)stop:(id *)a0;
- (BOOL)start:(id *)a0;

@end
