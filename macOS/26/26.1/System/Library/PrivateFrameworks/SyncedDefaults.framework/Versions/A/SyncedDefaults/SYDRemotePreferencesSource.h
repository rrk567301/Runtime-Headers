@interface SYDRemotePreferencesSource : NSObject

+ (id)SYDUbiquitousKeyValueStoreDidChangeExternallyNotification;
+ (id)SYDRemotePreferencesSourceConfigurationDidChangeNotification;
+ (void)migrateSyncedDefaultsForBundleIdentifier:(id)a0;
+ (id)SYDRemotePreferencesSourceDidChangeNotification;

- (void)scheduleRemoteSynchronization;
- (long long)maximumKeyCount;
- (void)synchronizationWithCompletionHandler:(id /* block */)a0;
- (long long)maximumDataLengthPerKey;
- (id)initWithApplicationID:(struct __CFString { } *)a0 shared:(BOOL)a1;
- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2 additionalSource:(BOOL)a3;
- (unsigned char)synchronize;
- (long long)maximumTotalDataLength;
- (id)copyExternalChangesWithChangeCount:(long long *)a0;
- (id)objectForKey:(id)a0 error:(id *)a1;
- (void)unregisterForSynchronizedDefaults;
- (void)updateConfiguration;
- (BOOL)removeObjectForKey:(id)a0 error:(id *)a1;
- (void)ping;
- (long long)maximumKeyLength;
- (BOOL)setObject:(id)a0 forKey:(id)a1 error:(id *)a2;
- (void *)getValueForKey:(struct __CFString { } *)a0;
- (unsigned char)_synchronizeForced:(unsigned char)a0;
- (void)setDefaultsConfiguration:(id)a0;
- (struct __CFDictionary { } *)copyDictionary;
- (void)registerForSynchronizedDefaults;
- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2 additionalSource:(BOOL)a3 containerPath:(struct __CFString { } *)a4;
- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2 additionalSource:(BOOL)a3 containerPath:(struct __CFString { } *)a4 storeType:(long long)a5;
- (unsigned char)synchronizeForced:(unsigned char)a0;
- (unsigned char)hasExternalChanges;
- (id)dictionaryRepresentationWithError:(id *)a0;
- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2;
- (void)setValue:(void *)a0 forKey:(struct __CFString { } *)a1;
- (void)dealloc;
- (void)discardExternalChangesForChangeCount:(long long)a0;

@end
