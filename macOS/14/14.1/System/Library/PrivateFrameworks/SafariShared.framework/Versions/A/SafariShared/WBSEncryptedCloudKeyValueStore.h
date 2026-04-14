@class NSString, NSUbiquitousKeyValueStore;

@interface WBSEncryptedCloudKeyValueStore : NSObject {
    id _accountUpdateObserver;
    NSString *_dsid;
    struct RetainPtr<_PCSIdentitySetData *> { void *m_ptr; } _pcsIdentitySet;
    struct RetainPtr<_OpaquePCSShareProtection *> { void *m_ptr; } _pcsShareProtection;
    struct RetainPtr<const __CFData *> { void *m_ptr; } _serializedPCSObject;
}

@property (readonly, nonatomic) NSUbiquitousKeyValueStore *backingStore;

+ (id)additionalStoreWithIdentifier:(id)a0;
+ (id)defaultStore;

- (void)dealloc;
- (void).cxx_destruct;
- (void)removeObjectForKey:(id)a0;
- (void)synchronize;
- (void)prewarm;
- (id).cxx_construct;
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
