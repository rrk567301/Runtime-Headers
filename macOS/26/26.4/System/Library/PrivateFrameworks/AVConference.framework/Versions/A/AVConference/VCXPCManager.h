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
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)allocWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (id)init;
- (oneway void)release;
- (void)dealloc;
- (unsigned long long)retainCount;
- (void)deregisterBlocksFromService;

@end
