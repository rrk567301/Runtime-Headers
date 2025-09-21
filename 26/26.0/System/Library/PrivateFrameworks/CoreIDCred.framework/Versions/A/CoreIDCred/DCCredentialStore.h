@class NSArray, DCCredentialStoreClient;

@interface DCCredentialStore : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _hasBeenConfigured;
}

@property (readonly, nonatomic) DCCredentialStoreClient *client;
@property (readonly, nonatomic) NSArray *partitions;

- (void)deleteCredential:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)finishConfiguration;
- (BOOL)hasBeenConfigured;
- (void)setHasBeenConfigured:(BOOL)a0;
- (void)retrieveAccountKeySigningKeyForAccountKeyIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)activeRegionsInPartitions:(id)a0 docTypes:(id)a1 completion:(id /* block */)a2;
- (void)allElementsOfCredential:(id)a0 authData:(id)a1 completion:(id /* block */)a2;
- (void)allElementsOfCredential:(id)a0 completion:(id /* block */)a1;
- (void)associateExternalPresentmentKeyWithCredential:(id)a0 publicKeyIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)authorizeDeviceKeySigningKeyOfCredential:(id)a0 accountKeyIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)authorizeRemoteKeySigningKeyWithCredential:(id)a0 remoteKey:(id)a1 completion:(id /* block */)a2;
- (void)checkCompletenessOfCredential:(id)a0 completion:(id /* block */)a1;
- (void)clearPresentmentKeyUsageForCredential:(id)a0 completion:(id /* block */)a1;
- (void)configureIfNeededWithContinuation:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)createAccountKeySigningKeyForAccountKeyIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)createCredentialInPartition:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)credentialIdentifierForPublicKeyIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)credentialIdentifiers:(id /* block */)a0;
- (void)credentialIdentifiersForPublicKeyIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)credentialIdentifiersInPartitions:(id)a0 completion:(id /* block */)a1;
- (void)credentialIdentifiersInPartitions:(id)a0 docType:(id)a1 completion:(id /* block */)a2;
- (void)deleteAccountKeySigningKeyForAccountKeyIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)deleteDataFromSyncableKeyStoreForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)elementsOfCredential:(id)a0 elementIdentifiers:(id)a1 authData:(id)a2 completion:(id /* block */)a3;
- (void)elementsOfCredential:(id)a0 elementIdentifiers:(id)a1 completion:(id /* block */)a2;
- (void)eraseLegacySEKeySlot:(long long)a0 completion:(id /* block */)a1;
- (void)generateAccountKeyAuthorizationForCredential:(id)a0 accountKeyIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)generateDeviceEncryptionKeyForCredential:(id)a0 completion:(id /* block */)a1;
- (void)generateDeviceEncryptionKeyForCredential:(id)a0 keyType:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)generateKeySigningKeyForCredential:(id)a0 completion:(id /* block */)a1;
- (void)generatePresentmentKeyForCredential:(id)a0 completion:(id /* block */)a1;
- (void)generatePresentmentKeysForCredential:(id)a0 numKeys:(long long)a1 completion:(id /* block */)a2;
- (id)initWithPartitions:(id)a0;
- (void)isAccountKeySigningKeyAvailableForAccountKeyIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)isPIITokenAvailableForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)keyInfoForCredential:(id)a0 completion:(id /* block */)a1;
- (void)occupiedLegacySEKeySlotsWithCompletion:(id /* block */)a0;
- (void)payloadAuthACLForCredential:(id)a0 completion:(id /* block */)a1;
- (void)payloadsOfCredential:(id)a0 completion:(id /* block */)a1;
- (void)propertiesOfCredential:(id)a0 completion:(id /* block */)a1;
- (void)replacePayloadOfCredential:(id)a0 withPayload:(id)a1 format:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)retrieveDataFromSyncableKeyStoreForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)setStateOfCredential:(id)a0 to:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)storeDataInSyncableKeyStoreForIdentifier:(id)a0 data:(id)a1 completion:(id /* block */)a2;
- (void)updateDataInSyncableKeyStoreForIdentifier:(id)a0 attributesToUpdate:(id)a1 completion:(id /* block */)a2;

@end
