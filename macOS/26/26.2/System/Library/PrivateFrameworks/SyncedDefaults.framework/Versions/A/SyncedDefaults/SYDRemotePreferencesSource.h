@interface SYDRemotePreferencesSource : NSObject

+ (id)SYDRemotePreferencesSourceDidChangeNotification;
+ (id)SYDRemotePreferencesSourceConfigurationDidChangeNotification;
+ (id)SYDUbiquitousKeyValueStoreDidChangeExternallyNotification;
+ (void)migrateSyncedDefaultsForBundleIdentifier:(id)a0;

- (void *)getValueForKey:(struct __CFString { } *)a0;
- (id)dictionaryRepresentationWithError:(id *)a0;
- (void)discardExternalChangesForChangeCount:(long long)a0;
- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2;
- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2 additionalSource:(BOOL)a3;
- (id)objectForKey:(id)a0 error:(id *)a1;
- (long long)maximumTotalDataLength;
- (void)updateConfiguration;
- (void)unregisterForSynchronizedDefaults;
- (BOOL)removeObjectForKey:(id)a0 error:(id *)a1;
- (unsigned char)hasExternalChanges;
- (void)ping;
- (unsigned char)synchronizeForced:(unsigned char)a0;
- (long long)maximumKeyLength;
- (struct __CFDictionary { } *)copyDictionary;
- (long long)maximumKeyCount;
- (void)setValue:(void *)a0 forKey:(struct __CFString { } *)a1;
- (long long)maximumDataLengthPerKey;
- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2 additionalSource:(BOOL)a3 containerPath:(struct __CFString { } *)a4 storeType:(long long)a5;
- (void)scheduleRemoteSynchronization;
- (id)copyExternalChangesWithChangeCount:(long long *)a0;
- (void)synchronizationWithCompletionHandler:(id /* block */)a0;
- (unsigned char)_synchronizeForced:(unsigned char)a0;
- (id)initWithApplicationID:(struct __CFString { } *)a0 shared:(BOOL)a1;
- (BOOL)setObject:(id)a0 forKey:(id)a1 error:(id *)a2;
- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2 additionalSource:(BOOL)a3 containerPath:(struct __CFString { } *)a4;
- (void)registerForSynchronizedDefaults;
- (void)setDefaultsConfiguration:(id)a0;
- (unsigned char)synchronize;
- (void)dealloc;

@end
