@interface OSIDetachLoggingElement : OSIInstallQueueElement

- (id)operationName;
- (char)runReturningError:(id *)a0;
- (double)estimatedTimeToComplete;

@end
