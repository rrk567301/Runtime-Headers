@interface BRCUncancellableBlockOperation : NSBlockOperation

- (void)cancel;
- (char)isCancelled;

@end
