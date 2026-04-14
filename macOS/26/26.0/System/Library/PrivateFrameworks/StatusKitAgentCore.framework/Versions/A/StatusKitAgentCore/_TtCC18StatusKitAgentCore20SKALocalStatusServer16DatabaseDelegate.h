@interface _TtCC18StatusKitAgentCore20SKALocalStatusServer16DatabaseDelegate : NSObject <SKADatabaseProvidingDelegate, SKADatabaseManagingDelegate>

- (void)databaseDidReceiveRemoteChangesForChannels:(id)a0;
- (void)initialCloudKitImportReceived:(id)a0;
- (void)databaseManager:(id)a0 didCreateChannel:(id)a1;
- (id)init;
- (void)databaseAccountStatusChanged;

@end
