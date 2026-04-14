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

- (id)retain;
- (id)allocWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)init;
- (void)dealloc;
- (void)deregisterBlocksFromService;

@end
