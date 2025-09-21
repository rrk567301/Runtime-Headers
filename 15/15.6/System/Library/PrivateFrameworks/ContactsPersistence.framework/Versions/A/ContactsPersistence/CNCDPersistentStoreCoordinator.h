@interface CNCDPersistentStoreCoordinator : NSObject

+ (unsigned long long)countOfPersistentStoresAttachedToPersistentStoreCoordinator:(id)a0;
+ (char)isAnyPersistentStoreAttachedToPersistentStoreCoordinator:(id)a0;
+ (char)isAnyValidContactsStoreTypeAttachedToPersistentStoreCoordinator:(id)a0;
+ (void)withCoordinator:(id)a0 performBlockAndWait:(id /* block */)a1;
+ (id)withCoordinator:(id)a0 resultOfBlock:(id /* block */)a1;

@end
