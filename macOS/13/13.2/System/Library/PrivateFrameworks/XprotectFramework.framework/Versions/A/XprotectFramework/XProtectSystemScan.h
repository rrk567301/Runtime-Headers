@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface XProtectSystemScan : NSObject {
    NSXPCConnection *_xpc;
    NSObject<OS_dispatch_queue> *_system_scan_queue;
    id plugin_service;
}

- (id)init;
- (void).cxx_destruct;
- (void)setDefaultXPCHandlers;
- (void)startSystemScan;

@end
