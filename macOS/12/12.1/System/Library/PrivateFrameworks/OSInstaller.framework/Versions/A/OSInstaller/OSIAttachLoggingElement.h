@interface OSIAttachLoggingElement : OSIInstallQueueElement

+ (void)markDetached;
+ (BOOL)flushCurrentInstallLogToMutableProduct;

- (id)operationName;
- (BOOL)runReturningError:(id *)a0;
- (double)estimatedTimeToComplete;
- (BOOL)_attachLog;

@end
