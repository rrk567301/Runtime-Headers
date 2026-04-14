@class NSXPCConnection;

@interface WLKExternalMediaContentManager : NSObject {
    NSXPCConnection *_connection;
}

+ (id)sharedManager;

- (id)_connection;
- (id)_init;
- (void).cxx_destruct;
- (id)_proxy;
- (id)init;
- (void)_deletePlaybackActivityWithIdentifier:(id)a0 bundleID:(id)a1;
- (void)deletePlaybackActivityWithIdentifier:(id)a0;

@end
