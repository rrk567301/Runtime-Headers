@class NSXPCConnection;

@interface WLKExternalMediaContentManager : NSObject {
    NSXPCConnection *_connection;
}

+ (id)sharedManager;

- (id)_connection;
- (id)_proxy;
- (id)init;
- (id)_init;
- (void).cxx_destruct;
- (void)_deletePlaybackActivityWithIdentifier:(id)a0 bundleID:(id)a1;
- (void)deletePlaybackActivityWithIdentifier:(id)a0;

@end
