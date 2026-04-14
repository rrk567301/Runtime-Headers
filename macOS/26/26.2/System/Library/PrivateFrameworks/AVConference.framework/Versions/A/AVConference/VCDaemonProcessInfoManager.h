@class NSObject;
@protocol OS_dispatch_queue;

@interface VCDaemonProcessInfoManager : NSObject {
    NSObject<OS_dispatch_queue> *_xpcQueue;
}

+ (id)sharedManager;
+ (id)copyProcessInfo;

- (id)copyAuditTokenInfo;
- (id)retain;
- (id)allocWithZone:(struct _NSZone { } *)a0;
- (void)deregisterBlocksForService;
- (id)copyUniquePidInfo;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)retainCount;
- (id)autorelease;
- (void)registerBlocksForService;
- (oneway void)release;
- (id)init;
- (void)dealloc;

@end
