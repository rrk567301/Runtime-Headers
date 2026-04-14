@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface XProtectUpdate : NSObject {
    NSXPCConnection *_xpc;
    NSObject<OS_dispatch_queue> *_system_update_queue;
}

- (void).cxx_destruct;
- (id)forceUpdate;
- (id)init;
- (id)doUpdate:(id *)a0;
- (id)doUpdate;
- (id)fetchAvailableUpdateInfo:(id *)a0;
- (id)prereleaseUpdate;
- (id)updateWithForceOnline:(BOOL)a0;

@end
