@interface _CATLongRunningTaskOperation : CATTaskOperation

- (BOOL)isAsynchronous;
- (void)cancel;
- (void)main;

@end
