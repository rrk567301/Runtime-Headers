@class NSXPCConnection;

@interface _LSDDisseminationRemoteClient : NSObject <_LSDDisseminationServerProtocol> {
    BOOL _hasCheckedIn;
    NSXPCConnection *_connection;
}

- (id)initWithConnection:(id)a0;
- (void)connectionInterrupted;
- (void).cxx_destruct;
- (void)noteBundleMetadataUpdatedForIdentifier:(id)a0 SINF:(id)a1 iTunesPlist:(id)a2 placeholderMetadata:(id)a3;
- (void)noteInstallationActivityForBundleIdentifier:(id)a0;
- (void)registerDisseminationSinkWithReply:(id /* block */)a0;

@end
