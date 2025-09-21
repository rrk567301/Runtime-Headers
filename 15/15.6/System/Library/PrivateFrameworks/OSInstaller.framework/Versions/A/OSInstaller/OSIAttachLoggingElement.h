@interface OSIAttachLoggingElement : OSIInstallQueueElement

+ (char)flushCurrentInstallLogToMutableProduct;
+ (void)markDetached;

- (id)operationName;
- (char)runReturningError:(id *)a0;
- (char)_attachLog;
- (double)estimatedTimeToComplete;

@end
