@class NSDictionary, SYDClientToDaemonConnection;

@interface NSUbiquitousKeyValueStore : NSObject {
    SYDClientToDaemonConnection *_source;
}

@property (class, readonly) NSUbiquitousKeyValueStore *defaultStore;

@property (readonly, copy) NSDictionary *dictionaryRepresentation;

+ (id)additionalStoreWithIdentifier:(id)a0;

- (void)dealloc;
- (id)init;
- (char)boolForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)registerDefaultValues:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (char)synchronize;
- (id)arrayForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (id)initWithBundleIdentifier:(id)a0;
- (id)stringForKey:(id)a0;
- (unsigned long long)maximumKeyCount;
- (void)setData:(id)a0 forKey:(id)a1;
- (long long)longLongForKey:(id)a0;
- (void)setBool:(char)a0 forKey:(id)a1;
- (id)_initWithStoreIdentifier:(id)a0 type:(long long)a1;
- (id)_initWithStoreIdentifier:(id)a0 usingEndToEndEncryption:(char)a1;
- (id)_remotePreferencesSource;
- (void)_sourceDidChangePassthroughNotification:(id)a0;
- (id)dataForKey:(id)a0;
- (double)doubleForKey:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 storeIdentifier:(id)a1;
- (id)initWithBundleIdentifier:(id)a0 storeIdentifier:(id)a1 additionalStore:(char)a2;
- (id)initWithStoreIdentifier:(id)a0 type:(long long)a1;
- (unsigned long long)maximumDataLengthPerKey;
- (unsigned long long)maximumKeyLength;
- (unsigned long long)maximumTotalDataLength;
- (void)setArray:(id)a0 forKey:(id)a1;
- (void)setDictionary:(id)a0 forKey:(id)a1;
- (void)setDouble:(double)a0 forKey:(id)a1;
- (void)setLongLong:(long long)a0 forKey:(id)a1;
- (void)setString:(id)a0 forKey:(id)a1;
- (void)synchronizeWithCompletionHandler:(id /* block */)a0;

@end
