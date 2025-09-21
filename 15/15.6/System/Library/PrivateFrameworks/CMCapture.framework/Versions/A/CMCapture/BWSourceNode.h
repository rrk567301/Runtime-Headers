@interface BWSourceNode : BWNode

@property (readonly, nonatomic) struct OpaqueCMClock { } *clock;

- (char)start:(id *)a0;
- (char)stop:(id *)a0;
- (id)nodeType;
- (void)makeOutputsLiveIfNeeded;

@end
