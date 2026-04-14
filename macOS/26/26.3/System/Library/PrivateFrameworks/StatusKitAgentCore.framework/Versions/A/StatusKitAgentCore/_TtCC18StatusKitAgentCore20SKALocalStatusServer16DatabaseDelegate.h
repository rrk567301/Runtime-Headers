@interface _TtCC18StatusKitAgentCore20SKALocalStatusServer16DatabaseDelegate : NSObject <SKADatabaseProvidingDelegate, SKADatabaseManagingDelegate>

- (void)databaseManager:(id)a0 didCreateChannel:(id)a1;
- (id)init;
- (void)databaseDidReceiveRemoteChangesForChannels:(id)a0;
- (void)databaseAccountStatusChanged;
- (void)initialCloudKitImportReceived:(id)a0;

@end
