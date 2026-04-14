@interface HMDManagedObjectContext : NSManagedObjectContext <HMFAsyncContext>

- (void)performBlockAndWait:(id /* block */)a0;
- (BOOL)save:(id *)a0;
- (void)performBlock:(id /* block */)a0;
- (void)assertIsExecuting;

@end
