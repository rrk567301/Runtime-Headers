@class NSXPCConnection;

@interface STSettingsServiceClient : NSObject

@property (retain) NSXPCConnection *connection;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)isCloudSyncEnabled:(id *)a0;
- (char)isRestrictAdultContentEnabled:(id *)a0;
- (void)processSettingsChangesSinceHistoryToken:(id)a0 withCompletion:(id /* block */)a1;
- (char)requestLegacyUsageForUser:(id)a0 withError:(id *)a1;
- (void)setCloudSync:(char)a0 withCompletion:(id /* block */)a1;
- (id)startCoreDataServerWithError:(id *)a0;
- (char)updateLegacyUsageWithError:(id *)a0;

@end
