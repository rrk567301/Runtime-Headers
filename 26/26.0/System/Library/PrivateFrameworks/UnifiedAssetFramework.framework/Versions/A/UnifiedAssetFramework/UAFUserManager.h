@interface UAFUserManager : NSObject

+ (id)removeUser:(id)a0;
+ (id)getConcurrentQueue;
+ (void)performUserCleanup;
+ (void)performUserCleanupOnQueue:(id)a0 completion:(id /* block */)a1;
+ (void)removeUser:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
+ (void)updateLastSeenForCurrentUserOnQueue:(id)a0 completion:(id /* block */)a1;
+ (void)updateLastSeenForUser:(id)a0 queue:(id)a1 completion:(id /* block */)a2;

@end
