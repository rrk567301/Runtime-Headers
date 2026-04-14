@interface _CATTransportDidSendMessageOperation : NSBlockOperation

- (BOOL)isCancelled;
- (void)cancel;
- (BOOL)isCanceled;

@end
