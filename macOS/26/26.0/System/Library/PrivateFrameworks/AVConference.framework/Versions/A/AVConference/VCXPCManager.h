@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface VCXPCManager : VCObject {
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
    NSMutableArray *_registeredServices;
}

+ (id)sharedInstance;
+ (void)registerBlocksForService;
+ (void)addNSError:(id)a0 toXPCArgumentDictionary:(id)a1;
+ (void)registerBlock:(id /* block */)a0 forService:(const char *)a1;
+ (void)registerTerminateBlock:(id /* block */)a0 forService:(const char *)a1 expectedClasses:(id)a2;

- (id)autorelease;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (id)init;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)allocWithZone:(struct _NSZone { } *)a0;
- (void)deregisterBlocksFromService;

@end
