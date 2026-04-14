@interface OSIAttachLoggingElement : OSIInstallQueueElement

+ (BOOL)flushCurrentInstallLogToMutableProduct;
+ (void)markDetached;

- (id)operationName;
- (BOOL)runReturningError:(id *)a0;
- (double)estimatedTimeToComplete;
- (BOOL)_attachLog;

@end
