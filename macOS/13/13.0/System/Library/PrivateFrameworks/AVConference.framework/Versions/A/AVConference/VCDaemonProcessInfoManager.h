@class NSObject;
@protocol OS_dispatch_queue;

@interface VCDaemonProcessInfoManager : NSObject {
    NSObject<OS_dispatch_queue> *_xpcQueue;
}

+ (id)sharedManager;
+ (id)copyProcessInfo;

- (id)retain;
- (oneway void)release;
- (void)dealloc;
- (id)allocWithZone:(struct _NSZone { } *)a0;
- (id)autorelease;
- (unsigned long long)retainCount;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)registerBlocksForService;
- (void)deregisterBlocksForService;
- (id)copyProcessInfo;

@end
