@interface CalAgentExchangeQueueOperation : CalAgentOperation

+ (Class)operationHandled;

- (void)start;
- (BOOL)isSerialOperation;

@end
