@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface XProtectUpdate : NSObject {
    NSXPCConnection *_xpc;
    NSObject<OS_dispatch_queue> *_system_update_queue;
}

- (id)init;
- (void).cxx_destruct;
- (id)doUpdate;

@end
