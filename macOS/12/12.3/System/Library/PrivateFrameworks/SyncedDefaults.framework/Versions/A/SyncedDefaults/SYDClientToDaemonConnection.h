@class NSCache, NSLock, NSXPCConnection, NSString, NSObject, SYDStoreConfiguration;
@protocol OS_dispatch_queue;

@interface SYDClientToDaemonConnection : SYDRemotePreferencesSource <SYDClientProtocol>

@property (retain, nonatomic) SYDStoreConfiguration *storeConfiguration;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *analyticsQueue;
@property (nonatomic) int daemonWakeNotifyToken;
@property (nonatomic) BOOL didLogFaultForEntitlements;
@property BOOL needsChangeDictionaryFromDaemon;
@property (retain, nonatomic) NSCache *cachedObjects;
@property (retain, nonatomic) NSLock *cacheLock;
@property (readonly, nonatomic) BOOL isSyncingWithCloud;
@property unsigned long long syncingWithCloudCounter;
@property (readonly, nonatomic) NSString *storeIdentifier;
@property (readonly, nonatomic) long long storeType;

+ (id)defaultStoreIdentifierForCurrentProcessWithApplicationIdentifier:(id)a0;
+ (id)disgustingUglyHardcodedKnownStoreIdentifierForApplicationIdentifier:(id)a0;
+ (BOOL)hasInitializedStoreWithIdentifier:(id)a0;
+ (void)setHasInitializedStoreWithIdentifier:(id)a0;
+ (id)daemonProtocolInterface;
+ (void)processAccountChangesWithCompletionHandler:(id /* block */)a0;
+ (id)clientProtocolInterface;
+ (void)setShouldSyncOnFirstInitializationOverride:(id)a0;
+ (id)shouldSyncOnFirstInitializationOverride;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)registerForSynchronizedDefaults;
- (void)setValue:(void *)a0 forKey:(struct __CFString { } *)a1;
- (unsigned char)synchronizeForced:(unsigned char)a0;
- (struct __CFDictionary { } *)copyDictionary;
- (void)synchronizationWithCompletionHandler:(id /* block */)a0;
- (unsigned char)synchronize;
- (long long)generationCount;
- (id)dictionaryRepresentation;
- (void)discardExternalChangesForChangeCount:(long long)a0;
- (void *)getValueForKey:(struct __CFString { } *)a0;
- (unsigned char)hasExternalChanges;
- (id)copyExternalChangesWithChangeCount:(long long *)a0;
- (void)scheduleRemoteSynchronization;
- (void)updateConfiguration;
- (void)unregisterForSynchronizedDefaults;
- (void)ping;
- (long long)maximumKeyCount;
- (long long)maximumKeyLength;
- (long long)maximumDataLengthPerKey;
- (long long)maximumTotalDataLength;
- (id)initWithStoreIdentifier:(id)a0 type:(long long)a1;
- (id)changeToken;
- (id)synchronousDaemonWithErrorHandler:(id /* block */)a0;
- (id)objectForKey:(id)a0 error:(id *)a1;
- (BOOL)setObject:(id)a0 forKey:(id)a1 error:(id *)a2;
- (void)setDefaultsConfiguration:(id)a0;
- (struct __CFArray { } *)copyKeyList;
- (id)dictionaryRepresentationWithError:(id *)a0;
- (id)initWithStoreConfiguration:(id)a0;
- (void)registerForDaemonDidWakeNotifications;
- (void)performInitialSyncIfNecessary;
- (void)_handleCacheErrorForKey:(id)a0;
- (void)logFaultIfNecessaryForError:(id)a0;
- (void)processChangeDictionary:(id)a0;
- (void)setChangeToken:(id)a0;
- (id)asyncDaemonWithErrorHandler:(id /* block */)a0;
- (void)daemonDidWake;
- (void)storeDidChangeWithConfiguration:(id)a0 changeDictionary:(id)a1 reply:(id /* block */)a2;

@end
