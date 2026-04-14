@interface SYDRemotePreferencesSource : NSObject

+ (void)migrateSyncedDefaultsForBundleIdentifier:(id)a0;
+ (id)SYDRemotePreferencesSourceDidChangeNotification;
+ (id)SYDRemotePreferencesSourceConfigurationDidChangeNotification;
+ (id)SYDUbiquitousKeyValueStoreDidChangeExternallyNotification;

- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2;
- (struct __CFDictionary { } *)copyDictionary;
- (void)setValue:(void *)a0 forKey:(struct __CFString { } *)a1;
- (void *)getValueForKey:(struct __CFString { } *)a0;
- (id)dictionaryRepresentationWithError:(id *)a0;
- (void)setDefaultsConfiguration:(id)a0;
- (long long)maximumTotalDataLength;
- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2 additionalSource:(BOOL)a3 containerPath:(struct __CFString { } *)a4;
- (long long)maximumKeyLength;
- (id)initWithApplicationID:(struct __CFString { } *)a0 shared:(BOOL)a1;
- (unsigned char)synchronizeForced:(unsigned char)a0;
- (long long)maximumKeyCount;
- (void)synchronizationWithCompletionHandler:(id /* block */)a0;
- (void)unregisterForSynchronizedDefaults;
- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2 additionalSource:(BOOL)a3 containerPath:(struct __CFString { } *)a4 storeType:(long long)a5;
- (unsigned char)_synchronizeForced:(unsigned char)a0;
- (void)discardExternalChangesForChangeCount:(long long)a0;
- (id)copyExternalChangesWithChangeCount:(long long *)a0;
- (long long)maximumDataLengthPerKey;
- (void)registerForSynchronizedDefaults;
- (id)objectForKey:(id)a0 error:(id *)a1;
- (void)scheduleRemoteSynchronization;
- (BOOL)setObject:(id)a0 forKey:(id)a1 error:(id *)a2;
- (unsigned char)hasExternalChanges;
- (void)ping;
- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2 additionalSource:(BOOL)a3;
- (void)updateConfiguration;
- (BOOL)removeObjectForKey:(id)a0 error:(id *)a1;
- (unsigned char)synchronize;
- (void)dealloc;

@end
