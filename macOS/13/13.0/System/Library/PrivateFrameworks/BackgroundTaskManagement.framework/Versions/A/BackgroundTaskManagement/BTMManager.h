@class NSHashTable, NSXPCConnection;

@interface BTMManager : NSObject {
    long long _mode;
    NSHashTable *_lists;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _listsLock;
}

@property (class, readonly) BTMManager *shared;
@property (class, readonly) BTMManager *sharedSFLManager;

@property (readonly) NSXPCConnection *connection;

- (void).cxx_destruct;
- (id)initWithMode:(long long)a0;
- (id)fetchSFLItemsMatching:(long long)a0 error:(id *)a1;
- (BOOL)updateSFLItem:(id)a0 error:(id *)a1;
- (BOOL)removeSFLItem:(id)a0 error:(id *)a1;
- (BOOL)addSFLItemWithURL:(id)a0 managed:(BOOL)a1 error:(id *)a2;
- (void)handleUserDataDidChangeNotification:(id)a0;
- (BOOL)importSFLLoginItemsAndDeleteWhenDone:(BOOL)a0;
- (void)openLoginItemsWithCompletion:(id /* block */)a0;
- (id)userSettingsForUID:(unsigned int)a0;
- (BOOL)saveUserSettings:(id)a0;
- (void)launchdWillScanPath:(id)a0;
- (void)launchdDidScanPath:(id)a0;
- (BOOL)registerLaunchItemWithBundleURL:(id)a0 type:(long long)a1 relativeURL:(id)a2 configuration:(id)a3 uid:(unsigned int)a4;
- (BOOL)registerLaunchItemWithAuditToken:(struct { unsigned int x0[8]; } *)a0 type:(long long)a1 relativeURL:(id)a2 configuration:(id)a3 uid:(unsigned int)a4;
- (BOOL)registerLaunchItemWithAuditToken:(struct { unsigned int x0[8]; } *)a0 type:(long long)a1 relativeURL:(id)a2 configuration:(id)a3;
- (BOOL)unregisterLaunchItemWithBundleURL:(id)a0 type:(long long)a1 relativeURL:(id)a2 uid:(unsigned int)a3;
- (BOOL)unregisterLaunchItemWithAuditToken:(struct { unsigned int x0[8]; } *)a0 type:(long long)a1 relativeURL:(id)a2 uid:(unsigned int)a3;
- (BOOL)unregisterLaunchItemWithAuditToken:(struct { unsigned int x0[8]; } *)a0 type:(long long)a1 relativeURL:(id)a2;
- (id)invalidateLaunchItemWithBundleURL:(id)a0 type:(long long)a1 itemURL:(id)a2 configuration:(id)a3 uid:(unsigned int)a4;
- (void)_canLaunchItemWithAppURL:(id)a0 type:(long long)a1 relativeURL:(id)a2 configuration:(id)a3 uid:(unsigned int)a4 canLaunch:(BOOL *)a5 error:(id *)a6;
- (BOOL)canLaunchItemWithAppURL:(id)a0 type:(long long)a1 relativeURL:(id)a2 configuration:(id)a3;
- (BOOL)getItemDisposition:(long long *)a0 withAppURL:(id)a1 type:(long long)a2 relativeURL:(id)a3 configuration:(id)a4 uid:(unsigned int)a5;
- (BOOL)getEffectiveDisposition:(long long *)a0 andLWCR:(id *)a1 forAppURL:(id)a2 type:(long long)a3 relativeURL:(id)a4 configuration:(id)a5 uid:(unsigned int)a6;
- (id)fetchItemWithAppURL:(id)a0 type:(long long)a1 relativeURL:(id)a2 configuration:(id)a3 uid:(unsigned int)a4;
- (BOOL)addItem:(id)a0 uid:(unsigned int)a1 error:(id *)a2;
- (BOOL)removeItem:(id)a0 uid:(unsigned int)a1 error:(id *)a2;
- (BOOL)updateItem:(id)a0 uid:(unsigned int)a1 error:(id *)a2;
- (BOOL)updateItems:(id)a0 uid:(unsigned int)a1 error:(id *)a2;
- (id)getItemWithIdentifier:(id)a0 uid:(unsigned int)a1 error:(id *)a2;
- (id)fetchItemWithUUID:(id)a0 uid:(unsigned int)a1 error:(id *)a2;
- (id)_getItemsMatching:(long long)a0 uid:(unsigned int)a1 error:(id *)a2;
- (id)getItemsMatching:(long long)a0 uid:(unsigned int)a1 error:(id *)a2;
- (id)getItemsMatching:(long long)a0 error:(id *)a1;
- (id)addUserItemForURL:(id)a0 uid:(unsigned int)a1 error:(id *)a2;
- (id)addUserItemForURL:(id)a0 error:(id *)a1;
- (BOOL)importSFLLoginItemFromURL:(id)a0 uid:(unsigned int)a1 deleteWhenDone:(BOOL)a2;
- (id)mdmPayloadForIdentifier:(id)a0;
- (void)setMDMPayload:(id)a0 identifier:(id)a1 updateImmediately:(BOOL)a2;
- (void)setMDMPayload:(id)a0 identifier:(id)a1;
- (void)refreshManagedItems;
- (id)dumpDatabaseWithAuthorization:(id)a0 error:(id *)a1;
- (BOOL)eraseDatabaseWithAuthorization:(id)a0 error:(id *)a1;
- (BOOL)setAlwaysPostNotifications:(BOOL)a0;
- (BOOL)getAlwaysPostNotifications:(BOOL *)a0;
- (void)handleNotificationResponseWithIdentifier:(id)a0 action:(id)a1;

@end
