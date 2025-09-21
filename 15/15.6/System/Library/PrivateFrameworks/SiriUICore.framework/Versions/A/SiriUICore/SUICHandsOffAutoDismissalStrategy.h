@interface SUICHandsOffAutoDismissalStrategy : SUICAutoDismissalStrategy

- (char)shouldDismiss;
- (double)idleTimeInterval;

@end
