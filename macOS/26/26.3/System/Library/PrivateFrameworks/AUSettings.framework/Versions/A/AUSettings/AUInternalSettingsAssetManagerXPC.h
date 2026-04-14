@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AUInternalSettingsAssetManagerXPC : NSObject {
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

+ (id)xpcConnectionToDaemon;

- (id)remoteObject;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)settingsChangedForSerialNumber:(id)a0;

@end
