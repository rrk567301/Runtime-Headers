@class NSObject;
@protocol OS_dispatch_queue;

@interface VCDaemonProcessInfoManager : NSObject {
    NSObject<OS_dispatch_queue> *_xpcQueue;
}

+ (id)sharedManager;
+ (id)copyProcessInfo;

- (id)autorelease;
- (void)dealloc;
- (void)registerBlocksForService;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (id)init;
- (id)copyAuditTokenInfo;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)allocWithZone:(struct _NSZone { } *)a0;
- (id)copyUniquePidInfo;
- (void)deregisterBlocksForService;

@end
