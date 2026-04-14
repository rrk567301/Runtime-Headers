@interface SYDRemotePreferencesSource : NSObject

+ (id)SYDRemotePreferencesSourceDidChangeNotification;
+ (id)SYDRemotePreferencesSourceConfigurationDidChangeNotification;
+ (id)SYDUbiquitousKeyValueStoreDidChangeExternallyNotification;
+ (void)migrateSyncedDefaultsForBundleIdentifier:(id)a0;

- (void)dealloc;
- (void)registerForSynchronizedDefaults;
- (struct __CFDictionary { } *)copyDictionary;
- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2 additionalSource:(BOOL)a3 containerPath:(struct __CFString { } *)a4;
- (void)setValue:(void *)a0 forKey:(struct __CFString { } *)a1;
- (void)synchronizationWithCompletionHandler:(id /* block */)a0;
- (unsigned char)synchronize;
- (unsigned char)synchronizeForced:(unsigned char)a0;
- (void *)getValueForKey:(struct __CFString { } *)a0;
- (long long)maximumKeyCount;
- (unsigned char)_synchronizeForced:(unsigned char)a0;
- (id)copyExternalChangesWithChangeCount:(long long *)a0;
- (void)discardExternalChangesForChangeCount:(long long)a0;
- (unsigned char)hasExternalChanges;
- (id)initWithApplicationID:(struct __CFString { } *)a0 shared:(BOOL)a1;
- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2;
- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2 additionalSource:(BOOL)a3;
- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2 additionalSource:(BOOL)a3 containerPath:(struct __CFString { } *)a4 storeType:(long long)a5;
- (long long)maximumDataLengthPerKey;
- (long long)maximumKeyLength;
- (long long)maximumTotalDataLength;
- (void)ping;
- (void)scheduleRemoteSynchronization;
- (void)unregisterForSynchronizedDefaults;
- (void)updateConfiguration;
- (id)dictionaryRepresentationWithError:(id *)a0;
- (id)objectForKey:(id)a0 error:(id *)a1;
- (void)setDefaultsConfiguration:(id)a0;
- (BOOL)setObject:(id)a0 forKey:(id)a1 error:(id *)a2;

@end
