@class NSTimer, ACAccountStore, NSObject;
@protocol OS_dispatch_queue;

@interface ACDAccountSync : NSObject {
    int _circleToken;
    int _keychainToken;
    NSTimer *_timer;
    NSObject<OS_dispatch_queue> *_syncQueue;
    BOOL _enabled;
    BOOL _duchessEnabled;
    ACAccountStore *_store;
}

+ (id)sharedAccountSyncServer;
+ (id)accountSyncUnsupportedTypes;
+ (id)accountSyncSupportedTypes;
+ (id)accountSyncPropertiesForAccount:(id)a0;
+ (id)duchessHostnames;
+ (id)translatedKeys;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)sync;
- (void)devices;
- (id)primaryiCloudAccount;
- (BOOL)migrate;
- (void)registerForNotifications;
- (id)ldapAccounts;
- (void)setupAccountSync;
- (BOOL)checkCircleState;
- (void)scheduleSync;
- (void)markMigrated;
- (id)getiOSVersion;
- (void)accountChanges:(id)a0;
- (BOOL)detectDuchess;
- (id)processAdds;
- (id)processDeletes;
- (void)createKeychainItems:(id)a0;
- (id)processHostnameAdds;
- (id)processHostnameDeletes;
- (void)createAccounts:(id)a0;
- (void)deleteAccounts:(id)a0;
- (id)localAccounts;
- (id)remoteAccounts;
- (id)getAccountsOfType:(id)a0;
- (id)accountPropertiesFromDictionary:(id)a0 forType:(id)a1;
- (BOOL)unsupportedType:(id)a0;
- (BOOL)supportedType:(id)a0;
- (id)remoteHostnameAccounts;
- (id)localHostnameAccounts;
- (id)smtpAccounts;
- (void)postNotificationFor:(id)a0;
- (BOOL)isDataclassActionRequired:(id)a0;
- (void)queueSync;
- (BOOL)locallyMigrated;
- (void)fixSMTP;
- (void)fixLDAP;
- (BOOL)isMigrated;
- (id)translateSettings:(id)a0;
- (void)kvsChanges:(id)a0;
- (void)setiOSVersion;

@end
