@class NSObject;
@protocol OS_dispatch_queue;

@interface VCDaemonProcessInfoManager : NSObject {
    NSObject<OS_dispatch_queue> *_xpcQueue;
}

+ (id)sharedManager;
+ (id)copyProcessInfo;

- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyAuditTokenInfo;
- (id)allocWithZone:(struct _NSZone { } *)a0;
- (void)deregisterBlocksForService;
- (id)copyUniquePidInfo;
- (id)retain;
- (void)registerBlocksForService;
- (id)init;
- (oneway void)release;
- (void)dealloc;
- (unsigned long long)retainCount;

@end
