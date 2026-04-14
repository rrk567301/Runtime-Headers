@class NSXPCConnection;

@interface WLKExternalMediaContentManager : NSObject {
    NSXPCConnection *_connection;
}

+ (id)sharedManager;

- (id)_init;
- (id)_connection;
- (id)_proxy;
- (void).cxx_destruct;
- (id)init;
- (void)_deletePlaybackActivityWithIdentifier:(id)a0 bundleID:(id)a1;
- (void)deletePlaybackActivityWithIdentifier:(id)a0;

@end
