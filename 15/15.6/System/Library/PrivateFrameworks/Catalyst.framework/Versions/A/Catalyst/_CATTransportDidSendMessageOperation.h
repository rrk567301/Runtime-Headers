@interface _CATTransportDidSendMessageOperation : NSBlockOperation

- (void)cancel;
- (char)isCancelled;
- (char)isCanceled;

@end
