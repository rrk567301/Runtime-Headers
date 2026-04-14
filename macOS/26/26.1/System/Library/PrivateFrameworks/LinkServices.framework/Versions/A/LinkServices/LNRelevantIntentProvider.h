@class NSXPCConnection;

@interface LNRelevantIntentProvider : NSObject {
    NSXPCConnection *_connection;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)relevantIntentsWithReply:(id /* block */)a0;
- (void)relevantIntentsForBundleIdentifier:(id)a0 reply:(id /* block */)a1;

@end
