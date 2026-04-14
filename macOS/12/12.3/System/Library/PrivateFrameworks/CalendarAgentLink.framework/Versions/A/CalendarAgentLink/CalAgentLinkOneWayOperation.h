@interface CalAgentLinkOneWayOperation : CalAgentLinkOperation

@property (nonatomic) BOOL semaphoreDecremented;

- (id)init;
- (void)prepare;
- (void)willFinish;

@end
