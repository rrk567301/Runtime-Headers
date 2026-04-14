@interface SYDRemotePreferencesSource : NSObject

+ (id)SYDUbiquitousKeyValueStoreDidChangeExternallyNotification;
+ (id)SYDRemotePreferencesSourceDidChangeNotification;
+ (id)SYDRemotePreferencesSourceConfigurationDidChangeNotification;
+ (void)migrateSyncedDefaultsForBundleIdentifier:(id)a0;

- (void)dealloc;
- (void)synchronizationWithCompletionHandler:(id /* block */)a0;
- (unsigned char)synchronizeForced:(unsigned char)a0;
- (void)setValue:(void *)a0 forKey:(struct __CFString { } *)a1;
- (void)registerForSynchronizedDefaults;
- (struct __CFDictionary { } *)copyDictionary;
- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2 additionalSource:(BOOL)a3 containerPath:(struct __CFString { } *)a4;
- (unsigned char)synchronize;
- (void)ping;
- (void)scheduleRemoteSynchronization;
- (unsigned char)hasExternalChanges;
- (void)updateConfiguration;
- (void)unregisterForSynchronizedDefaults;
- (id)copyExternalChangesWithChangeCount:(long long *)a0;
- (void *)getValueForKey:(struct __CFString { } *)a0;
- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2 additionalSource:(BOOL)a3;
- (id)initWithApplicationID:(struct __CFString { } *)a0 shared:(BOOL)a1;
- (void)discardExternalChangesForChangeCount:(long long)a0;
- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2 additionalSource:(BOOL)a3 containerPath:(struct __CFString { } *)a4 storeType:(long long)a5;
- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2;
- (unsigned char)_synchronizeForced:(unsigned char)a0;
- (long long)maximumKeyCount;
- (long long)maximumKeyLength;
- (long long)maximumDataLengthPerKey;
- (long long)maximumTotalDataLength;
- (id)objectForKey:(id)a0 error:(id *)a1;
- (BOOL)setObject:(id)a0 forKey:(id)a1 error:(id *)a2;
- (void)setDefaultsConfiguration:(id)a0;
- (id)dictionaryRepresentationWithError:(id *)a0;

@end
