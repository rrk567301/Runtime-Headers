@class SYDClient, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface SYDRemotePreferencesSource : NSObject {
    long long _generationCount;
    long long _lastGenerationFromDisk;
    struct __CFString { } *_preferenceID;
    struct __CFURL { } *_urlOnDisk;
    struct __CFDictionary { } *_cache;
    long long _storageChangeCount;
    long long _initialSyncChangeCount;
    unsigned char _isInitialSync;
    struct __CFSet { } *_dirtyKeys;
    struct __CFDictionary { } *_configurationDictionary;
    NSMutableDictionary *_externalChanges;
    SYDClient *_client;
    id /* block */ _registrationBlock;
    NSObject<OS_dispatch_queue> *_registrationQueue;
    NSObject<OS_dispatch_queue> *_protectionQueue;
    BOOL _memoryWarningSourceEnabled;
    NSObject<OS_dispatch_source> *_memoryWarningSource;
    double _lastAccess;
    BOOL _forceNextSynchronization;
    NSObject<OS_os_transaction> *_isExecutingForClient;
}

@property (class, nonatomic) BOOL alwaysUseKVSOnCloudKit;

+ (void)initialize;
+ (id)SYDRemotePreferencesSourceDidChangeNotification;
+ (id)SYDRemotePreferencesSourceConfigurationDidChangeNotification;
+ (id)SYDUbiquitousKeyValueStoreDidChangeExternallyNotification;
+ (void)resetAllApplicationsWithCompletionHandler:(id /* block */)a0;
+ (void)noteAccountChanges:(id)a0;
+ (void)migrateSyncedDefaultsForBundleIdentifier:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2 additionalSource:(BOOL)a3 containerPath:(struct __CFString { } *)a4;
- (void)registerForSynchronizedDefaults;
- (void)setValue:(void *)a0 forKey:(struct __CFString { } *)a1;
- (unsigned char)synchronizeForced:(unsigned char)a0;
- (struct __CFDictionary { } *)copyDictionary;
- (void)synchronizationWithCompletionHandler:(id /* block */)a0;
- (unsigned char)synchronize;
- (long long)generationCount;
- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2 additionalSource:(BOOL)a3 containerPath:(struct __CFString { } *)a4 storeType:(long long)a5;
- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2;
- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2 additionalSource:(BOOL)a3;
- (id)initWithApplicationID:(struct __CFString { } *)a0 shared:(BOOL)a1;
- (void)discardExternalChangesForChangeCount:(long long)a0;
- (void *)getValueForKey:(struct __CFString { } *)a0;
- (unsigned char)hasExternalChanges;
- (id)copyExternalChangesWithChangeCount:(long long *)a0;
- (void)scheduleRemoteSynchronization;
- (unsigned char)_synchronizeForced:(unsigned char)a0;
- (void)updateConfiguration;
- (void)unregisterForSynchronizedDefaults;
- (void)ping;
- (long long)maximumKeyCount;
- (long long)maximumKeyLength;
- (long long)maximumDataLengthPerKey;
- (long long)maximumTotalDataLength;
- (void)setCache:(struct __CFDictionary { } *)a0;
- (long long)configurationValueForKey:(struct __CFString { } *)a0;
- (void)_createMemoryWarningSource;
- (void)_locked_syd_start_transaction;
- (void)_locked_syd_end_transaction;
- (void)_forceRegistrationNow;
- (void)_cachePlistFromDisk;
- (void)_storeConfiguration:(struct __CFDictionary { } *)a0;
- (id)_warningSource;
- (void)_didReceiveMemoryWarning;
- (struct __CFDictionary { } *)copyConfigurationDictionary;
- (id)objectForKey:(id)a0 error:(id *)a1;
- (BOOL)setObject:(id)a0 forKey:(id)a1 error:(id *)a2;
- (void)setDefaultsConfiguration:(id)a0;
- (unsigned char)isInitialSync;
- (struct __CFArray { } *)copyKeyList;
- (id)dictionaryRepresentationWithError:(id *)a0;
- (id)serverSideDebugDescription;

@end
