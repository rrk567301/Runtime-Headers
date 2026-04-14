@class NSMutableDictionary;

@interface ICMemoryContentKeyStore : NSObject <ICContentKeyStoreProtocol> {
    NSMutableDictionary *_keyEntries;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)containsKeyForIdentifier:(id)a0 error:(id *)a1;
- (id)loadKeyForIdentifier:(id)a0 renewalDate:(id *)a1 error:(id *)a2;
- (id)saveKey:(id)a0 forIdentifier:(id)a1 withRenewalDate:(id)a2;
- (id)incrementFailureCountForKeyWithIdentifier:(id)a0;
- (id)removeKeyForIdentifier:(id)a0;
- (id)removeAllKeys;
- (void)enumerateKeysUsingBlock:(id /* block */)a0;

@end
