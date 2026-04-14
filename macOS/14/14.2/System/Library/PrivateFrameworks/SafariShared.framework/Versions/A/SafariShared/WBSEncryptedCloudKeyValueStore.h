@class NSString, NSData, NSUbiquitousKeyValueStore;

@interface WBSEncryptedCloudKeyValueStore : NSObject {
    id _accountUpdateObserver;
    NSString *_dsid;
    NSData *_serializedPCSObject;
}

@property (nonatomic, getter=_pcsIdentitySet, setter=_setPCSIdentitySet:) struct _PCSIdentitySetData { } *pcsIdentitySet;
@property (nonatomic, getter=_pcsShareProtection, setter=_setPCSShareProtection:) struct _OpaquePCSShareProtection { } *pcsShareProtection;
@property (readonly, nonatomic) NSUbiquitousKeyValueStore *backingStore;

+ (id)additionalStoreWithIdentifier:(id)a0;
+ (id)defaultStore;

- (void)dealloc;
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
- (void)_setObject:(id)a0 forKey:(id)a1;
- (int)_currentPCSConfiguration;
- (id)_dsidForPrimaryAccount;
- (id)_objectForKey:(id)a0 ofClass:(Class)a1;
- (id)decryptEntry:(id)a0;
- (id)encryptPropertyList:(id)a0;

@end
