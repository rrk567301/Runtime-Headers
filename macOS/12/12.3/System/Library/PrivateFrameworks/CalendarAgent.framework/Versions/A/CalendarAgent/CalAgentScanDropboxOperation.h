@interface CalAgentScanDropboxOperation : CalAgentOperation

+ (Class)operationHandled;

- (void)start;
- (BOOL)isSerialOperation;

@end
