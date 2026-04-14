@interface HMDManagedObjectContext : NSManagedObjectContext <HMFAsyncContext>

- (void)performBlock:(id /* block */)a0;
- (BOOL)save:(id *)a0;
- (void)assertIsExecuting;
- (void)performBlockAndWait:(id /* block */)a0;

@end
