@interface _CATLongRunningTaskOperation : CATTaskOperation

- (void)cancel;
- (char)isAsynchronous;
- (void)main;

@end
