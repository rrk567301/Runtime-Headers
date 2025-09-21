@interface CDPKeychainSync : NSObject

+ (char)isUserVisibleKeychainSyncEnabled;
+ (void)setUserVisibleKeychainSyncEnabled:(char)a0 withCompletion:(id /* block */)a1;
+ (void)removeNonViewAwarePeersFromCircleWithContext:(id)a0 completion:(id /* block */)a1;
+ (void)synchronizeKeychainSyncForContext:(id)a0 withCompletion:(id /* block */)a1;

@end
