@class NSDictionary, SYDClientToDaemonConnection;

@interface NSUbiquitousKeyValueStore : NSObject {
    SYDClientToDaemonConnection *_source;
}

@property (class, readonly) NSUbiquitousKeyValueStore *defaultStore;

@property (readonly, copy) NSDictionary *dictionaryRepresentation;

+ (id)additionalStoreWithIdentifier:(id)a0;

- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (id)initWithBundleIdentifier:(id)a0;
- (id)stringForKey:(id)a0;
- (void)setDouble:(double)a0 forKey:(id)a1;
- (unsigned long long)maximumKeyCount;
- (void)setString:(id)a0 forKey:(id)a1;
- (void)setDictionary:(id)a0 forKey:(id)a1;
- (unsigned long long)maximumTotalDataLength;
- (id)arrayForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (double)doubleForKey:(id)a0;
- (unsigned long long)maximumKeyLength;
- (BOOL)boolForKey:(id)a0;
- (unsigned long long)maximumDataLengthPerKey;
- (void)setData:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (id)objectForKey:(id)a0;
- (id)dataForKey:(id)a0;
- (BOOL)synchronize;
- (id)init;
- (void)registerDefaultValues:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (id)initWithStoreIdentifier:(id)a0 type:(long long)a1;
- (void)setArray:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)synchronizeWithCompletionHandler:(id /* block */)a0;
- (long long)longLongForKey:(id)a0;
- (id)_initWithStoreIdentifier:(id)a0 type:(long long)a1;
- (id)_initWithStoreIdentifier:(id)a0 usingEndToEndEncryption:(BOOL)a1;
- (id)_remotePreferencesSource;
- (void)_sourceDidChangePassthroughNotification:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 storeIdentifier:(id)a1;
- (id)initWithBundleIdentifier:(id)a0 storeIdentifier:(id)a1 additionalStore:(BOOL)a2;
- (void)setLongLong:(long long)a0 forKey:(id)a1;

@end
