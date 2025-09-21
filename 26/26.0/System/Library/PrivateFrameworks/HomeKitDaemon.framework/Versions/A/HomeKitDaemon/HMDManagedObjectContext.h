@interface HMDManagedObjectContext : NSManagedObjectContext <HMFAsyncContext>

- (void)assertIsExecuting;
- (void)performBlock:(id /* block */)a0;
- (BOOL)save:(id *)a0;
- (void)performBlockAndWait:(id /* block */)a0;

@end
