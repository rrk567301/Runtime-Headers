@interface CalAgentRequestCalendarPublishOperation : CalAgentOperation

+ (Class)operationHandled;

- (void)start;
- (BOOL)isSerialOperation;

@end
