@interface CalAgentDownloadSpecificAttachmentOperation : CalAgentOperation

+ (Class)operationHandled;

- (void)start;
- (BOOL)isSerialOperation;

@end
