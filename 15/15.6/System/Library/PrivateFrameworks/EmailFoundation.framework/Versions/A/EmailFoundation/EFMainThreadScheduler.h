@interface EFMainThreadScheduler : EFQueueScheduler

- (id)init;
- (char)prefersImmediateExecution;

@end
