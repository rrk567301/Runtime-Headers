@interface STMOperationQueue : NSOperationQueue

+ (id)concurrentBackgroundQueue;
+ (id)serialBackgroundQueue;

- (void)addOperations:(id)a0;
- (void)addOperation:(id)a0;

@end
