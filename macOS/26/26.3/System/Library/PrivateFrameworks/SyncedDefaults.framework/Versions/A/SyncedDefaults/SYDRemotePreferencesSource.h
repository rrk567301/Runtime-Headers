@interface SYDRemotePreferencesSource : NSObject

+ (void)migrateSyncedDefaultsForBundleIdentifier:(id)a0;
+ (id)SYDUbiquitousKeyValueStoreDidChangeExternallyNotification;
+ (id)SYDRemotePreferencesSourceDidChangeNotification;
+ (id)SYDRemotePreferencesSourceConfigurationDidChangeNotification;

- (long long)maximumDataLengthPerKey;
- (unsigned char)hasExternalChanges;
- (void)discardExternalChangesForChangeCount:(long long)a0;
- (void)registerForSynchronizedDefaults;
- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2 additionalSource:(BOOL)a3 containerPath:(struct __CFString { } *)a4;
- (long long)maximumKeyCount;
- (void)unregisterForSynchronizedDefaults;
- (BOOL)setObject:(id)a0 forKey:(id)a1 error:(id *)a2;
- (void)synchronizationWithCompletionHandler:(id /* block */)a0;
- (void)scheduleRemoteSynchronization;
- (void)setDefaultsConfiguration:(id)a0;
- (void *)getValueForKey:(struct __CFString { } *)a0;
- (id)dictionaryRepresentationWithError:(id *)a0;
- (id)initWithApplicationID:(struct __CFString { } *)a0 shared:(BOOL)a1;
- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2 additionalSource:(BOOL)a3 containerPath:(struct __CFString { } *)a4 storeType:(long long)a5;
- (unsigned char)synchronizeForced:(unsigned char)a0;
- (unsigned char)_synchronizeForced:(unsigned char)a0;
- (BOOL)removeObjectForKey:(id)a0 error:(id *)a1;
- (id)objectForKey:(id)a0 error:(id *)a1;
- (long long)maximumTotalDataLength;
- (void)updateConfiguration;
- (void)ping;
- (struct __CFDictionary { } *)copyDictionary;
- (long long)maximumKeyLength;
- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2 additionalSource:(BOOL)a3;
- (id)copyExternalChangesWithChangeCount:(long long *)a0;
- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2;
- (void)setValue:(void *)a0 forKey:(struct __CFString { } *)a1;
- (void)dealloc;
- (unsigned char)synchronize;

@end
