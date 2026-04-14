@interface SYDRemotePreferencesSource : NSObject

+ (id)SYDUbiquitousKeyValueStoreDidChangeExternallyNotification;
+ (id)SYDRemotePreferencesSourceConfigurationDidChangeNotification;
+ (id)SYDRemotePreferencesSourceDidChangeNotification;
+ (void)migrateSyncedDefaultsForBundleIdentifier:(id)a0;

- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2 additionalSource:(BOOL)a3 containerPath:(struct __CFString { } *)a4;
- (void)ping;
- (unsigned char)synchronizeForced:(unsigned char)a0;
- (id)initWithApplicationID:(struct __CFString { } *)a0 shared:(BOOL)a1;
- (struct __CFDictionary { } *)copyDictionary;
- (id)dictionaryRepresentationWithError:(id *)a0;
- (BOOL)removeObjectForKey:(id)a0 error:(id *)a1;
- (unsigned char)_synchronizeForced:(unsigned char)a0;
- (id)objectForKey:(id)a0 error:(id *)a1;
- (long long)maximumKeyCount;
- (void)updateConfiguration;
- (long long)maximumTotalDataLength;
- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2 additionalSource:(BOOL)a3;
- (void)scheduleRemoteSynchronization;
- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2 additionalSource:(BOOL)a3 containerPath:(struct __CFString { } *)a4 storeType:(long long)a5;
- (void)setDefaultsConfiguration:(id)a0;
- (void)synchronizationWithCompletionHandler:(id /* block */)a0;
- (void)registerForSynchronizedDefaults;
- (unsigned char)hasExternalChanges;
- (void *)getValueForKey:(struct __CFString { } *)a0;
- (id)copyExternalChangesWithChangeCount:(long long *)a0;
- (long long)maximumKeyLength;
- (BOOL)setObject:(id)a0 forKey:(id)a1 error:(id *)a2;
- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2;
- (void)discardExternalChangesForChangeCount:(long long)a0;
- (long long)maximumDataLengthPerKey;
- (void)dealloc;
- (unsigned char)synchronize;
- (void)unregisterForSynchronizedDefaults;
- (void)setValue:(void *)a0 forKey:(struct __CFString { } *)a1;

@end
