@class NSUbiquitousKeyValueStore;

@interface WBSEncryptedCloudKeyValueStore : NSObject

@property (readonly, nonatomic) NSUbiquitousKeyValueStore *backingStore;

+ (id)additionalStoreWithIdentifier:(id)a0;
+ (id)defaultStore;

- (void).cxx_destruct;
- (void)removeObjectForKey:(id)a0;
- (void)synchronize;
- (void)prewarm;
- (id)arrayForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (id)initWithStore:(id)a0;
- (id)dictionaryRepresentation;
- (void)setArray:(id)a0 forKey:(id)a1;
- (void)setDictionary:(id)a0 forKey:(id)a1;
- (void)synchronizeWithCompletionHandler:(id /* block */)a0;

@end
