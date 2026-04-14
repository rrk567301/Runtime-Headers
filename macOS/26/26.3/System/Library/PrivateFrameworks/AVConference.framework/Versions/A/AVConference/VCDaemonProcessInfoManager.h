@class NSObject;
@protocol OS_dispatch_queue;

@interface VCDaemonProcessInfoManager : NSObject {
    NSObject<OS_dispatch_queue> *_xpcQueue;
}

+ (id)sharedManager;
+ (id)copyProcessInfo;

- (id)allocWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)retainCount;
- (id)autorelease;
- (id)copyUniquePidInfo;
- (id)retain;
- (id)init;
- (void)registerBlocksForService;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyAuditTokenInfo;
- (void)deregisterBlocksForService;
- (oneway void)release;

@end
