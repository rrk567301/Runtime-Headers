@class NSXPCConnection;

@interface WLKExternalMediaContentManager : NSObject {
    NSXPCConnection *_connection;
}

+ (id)sharedManager;

- (id)init;
- (id)_init;
- (void).cxx_destruct;
- (id)_connection;
- (id)_proxy;
- (void)deletePlaybackActivityWithIdentifier:(id)a0;
- (void)_deletePlaybackActivityWithIdentifier:(id)a0 bundleID:(id)a1;

@end
