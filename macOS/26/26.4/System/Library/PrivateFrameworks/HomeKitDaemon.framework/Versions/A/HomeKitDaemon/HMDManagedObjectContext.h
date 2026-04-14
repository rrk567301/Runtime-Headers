@interface HMDManagedObjectContext : NSManagedObjectContext <HMFAsyncContext>

- (BOOL)save:(id *)a0;
- (void)assertIsExecuting;
- (void)performBlockAndWait:(id /* block */)a0;
- (void)performBlock:(id /* block */)a0;

@end
