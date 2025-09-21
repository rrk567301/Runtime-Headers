@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AUInternalSettingsAssetManagerXPC : NSObject {
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

+ (id)xpcConnectionToDaemon;

- (id)remoteObject;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)settingsChangedForSerialNumber:(id)a0;

@end
