@interface HMDManagedObjectContext : NSManagedObjectContext <HMFAsyncContext>

- (void)performBlock:(id /* block */)a0;
- (char)save:(id *)a0;
- (void)performBlockAndWait:(id /* block */)a0;
- (void)assertIsExecuting;

@end
