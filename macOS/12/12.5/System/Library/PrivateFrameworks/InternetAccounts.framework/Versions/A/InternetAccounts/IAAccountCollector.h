@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, IAXPCProtocol;

@interface IAAccountCollector : NSObject {
    NSXPCConnection *_connection;
    id<IAXPCProtocol> _agent;
    NSObject<OS_dispatch_queue> *_replyQueue;
}

+ (id)shared;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)accountWithUID:(id)a0 reply:(id /* block */)a1;
- (id)aListPluginIDForSettings:(id)a0;
- (id)imageForAccountUID:(id)a0;
- (void)activateAccountUID:(id)a0;
- (void)deactivateAccountUID:(id)a0;
- (void)activateAccountUID:(id)a0 reply:(id /* block */)a1;
- (void)allAccountsWithReply:(id /* block */)a0;
- (void)topLevelAccountsForProvider:(id)a0 reply:(id /* block */)a1;
- (void)accountsWithLoginName:(id)a0 service:(id)a1 provider:(id)a2 attributes:(id)a3 reply:(id /* block */)a4;
- (void)addAccount:(id)a0 reply:(id /* block */)a1;
- (void)removeAccountWithUID:(id)a0 deleteFromDataSource:(BOOL)a1 reply:(id /* block */)a2;
- (void)descriptionForAccount:(id)a0 reply:(id /* block */)a1;
- (void)account:(id)a0 didChangeWithType:(int)a1 oldAccount:(id)a2;
- (void)copyContactsRecordsAndDeleteAccountUID:(id)a0 reply:(id /* block */)a1;
- (void)authenticateAccountUID:(id)a0 credential:(id)a1 reply:(id /* block */)a2;
- (void)continueSetupInAppForPluginID:(id)a0 settings:(id)a1;
- (void)cancelSetupForAccount:(id)a0 pluginID:(id)a1;
- (void)configureAccountUID:(id)a0 pluginID:(id)a1;
- (void)dumpDataPluginNotificationHistory;
- (void)writeDiagnostics;
- (id)propertiesForPluginID:(id)a0;
- (void)updateAccountWithUID:(id)a0 withSettings:(id)a1;
- (id)addAccount_sync:(id)a0;
- (id)accountsWithLoginName_sync:(id)a0 service:(id)a1 provider:(id)a2 attributes:(id)a3;
- (id)descriptionForAccount:(id)a0;
- (id)imageForAccountUID:(id)a0 pluginID:(id)a1;
- (id)accountWithUID_sync:(id)a0;
- (void)cacheAccounts;
- (void)removeAccountWithUID:(id)a0 deleteFromPlugin:(BOOL)a1 reply:(id /* block */)a2;
- (void)addACAccountProperties:(id)a0 forUID:(id)a1;
- (id)deleteAccountWithUID_sync:(id)a0;
- (id)imageForPluginID:(id)a0;
- (id)topLevelAccounts_sync;
- (id)parentGoogleAccountForChildAccountWithUID:(id)a0;

@end
