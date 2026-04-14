@class NSString, NSMutableDictionary;

@interface ICMemoryContentKeyStore : NSObject <ICContentKeyStoreProtocol> {
    NSMutableDictionary *_keyEntries;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)containsKeyForIdentifier:(id)a0 error:(id *)a1;
- (void)enumerateKeyEntriesUsingBlock:(id /* block */)a0;
- (id)incrementFailureCountForKeyWithIdentifier:(id)a0;
- (id)loadKeyForIdentifier:(id)a0 error:(id *)a1;
- (id)removeAllKeys;
- (id)removeKeyForIdentifier:(id)a0;
- (id)saveKey:(id)a0 forIdentifier:(id)a1 adamID:(id)a2 withRenewalDate:(id)a3 accountDSID:(id)a4 keyServerProtocolType:(long long)a5;
- (id)saveKey:(id)a0 forIdentifier:(id)a1 adamID:(id)a2 withRenewalDate:(id)a3 expirationDate:(id)a4 accountDSID:(id)a5 keyServerProtocolType:(long long)a6;
- (id)saveKeyEntry:(id)a0;

@end
