@class AVVCSessionManager, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AVVCSessionFactory : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSMutableDictionary *sessionManagerMap;
@property (retain, nonatomic) AVVCSessionManager *primarySessionManager;
@property (copy, nonatomic) id /* block */ sessionWasCreatedBlock;
@property (copy, nonatomic) id /* block */ sessionWillBeDestroyedBlock;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (void)sessionForContext:(id)a0 completion:(id /* block */)a1;
- (id)sessionForContext:(id)a0 error:(id *)a1;
- (void)sessionForContext:(id)a0 clientType:(long long)a1 completion:(id /* block */)a2;
- (id)sessionForContext:(id)a0 clientType:(long long)a1 error:(id *)a2;
- (void)sessionManagerForContext:(id)a0 clientType:(long long)a1 completion:(id /* block */)a2;
- (id)sessionManagerForContext:(id)a0 clientType:(long long)a1 error:(id *)a2;
- (void)cleanupContext:(id)a0;
- (id)auxSessionManagers;
- (void)releasePrimarySessionManager;

@end
