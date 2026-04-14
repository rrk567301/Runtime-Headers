@interface CalAgentQueueStatusOperation : CalAgentOperation

+ (Class)operationHandled;

- (void)start;
- (BOOL)isSerialOperation;

@end
