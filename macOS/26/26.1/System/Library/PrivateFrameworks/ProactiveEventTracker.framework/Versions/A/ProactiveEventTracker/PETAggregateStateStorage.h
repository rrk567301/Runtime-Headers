@interface PETAggregateStateStorage : NSObject

+ (id)storageInMemory;
+ (id)storageOnDisk:(id)a0;

- (BOOL)resetLocked;
- (void)saveCorruptState;
- (void)reset;
- (void)runWithLock:(id /* block */)a0;
- (void)expand:(unsigned long long)a0 andRunWithLock:(id /* block */)a1;

@end
