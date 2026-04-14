@class NSObject;
@protocol OS_dispatch_queue;

@interface VCDaemonProcessInfoManager : NSObject {
    NSObject<OS_dispatch_queue> *_xpcQueue;
}

+ (id)sharedManager;
+ (id)copyProcessInfo;

- (id)allocWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (id)copyUniquePidInfo;
- (oneway void)release;
- (unsigned long long)retainCount;
- (void)registerBlocksForService;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)autorelease;
- (id)copyAuditTokenInfo;
- (id)init;
- (void)deregisterBlocksForService;

@end
