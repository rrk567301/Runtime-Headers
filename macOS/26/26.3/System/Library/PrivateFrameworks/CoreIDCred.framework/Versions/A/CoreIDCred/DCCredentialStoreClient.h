@class NSString, NSXPCConnection;

@interface DCCredentialStoreClient : NSObject <DCCredentialStoreXPCProtocol>

@property (retain, nonatomic) NSXPCConnection *serverConnection;
@property (copy) id /* block */ interruptionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)deleteCredential:(id)a0 completion:(id /* block */)a1;
- (void)retrieveAccountKeySigningKeyForAccountKeyIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)activeRegionsInPartitions:(id)a0 docTypes:(id)a1 completion:(id /* block */)a2;
- (void)allElementsOfCredential:(id)a0 authData:(id)a1 completion:(id /* block */)a2;
- (void)associateExternalPresentmentKeyWithCredential:(id)a0 publicKeyIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)authorizeDeviceKeySigningKeyOfCredential:(id)a0 accountKeyIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)authorizeRemoteKeySigningKeyWithCredential:(id)a0 remoteKey:(id)a1 completion:(id /* block */)a2;
- (void)checkCompletenessOfCredential:(id)a0 completion:(id /* block */)a1;
- (void)clearPresentmentKeyUsageForCredential:(id)a0 completion:(id /* block */)a1;
- (void)configureWithPartitions:(id)a0 completion:(id /* block */)a1;
- (void)createAccountKeySigningKeyForAccountKeyIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)createCredentialInPartition:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (id)createDaemonDisconnectedError;
- (void)credentialIdentifiersForPublicKeyIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)credentialIdentifiersInPartitions:(id)a0 completion:(id /* block */)a1;
- (void)credentialIdentifiersInPartitions:(id)a0 docType:(id)a1 completion:(id /* block */)a2;
- (void)deleteAccountKeySigningKeyForAccountKeyIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)deletePIIHashFromSyncableKeyStoreForIdentifier:(id)a0 keystoreType:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)deletePIITokenFromSyncableKeyStoreForIdentifier:(id)a0 credentialIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)elementsOfCredential:(id)a0 elementIdentifiers:(id)a1 authData:(id)a2 completion:(id /* block */)a3;
- (void)eraseLegacySEKeySlot:(long long)a0 completion:(id /* block */)a1;
- (void)generateAccountKeyAuthorizationForCredential:(id)a0 accountKeyIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)generateDeviceEncryptionKeyForCredential:(id)a0 keyType:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)generateKeySigningKeyForCredential:(id)a0 completion:(id /* block */)a1;
- (void)generatePresentmentKeyForCredential:(id)a0 completion:(id /* block */)a1;
- (void)generatePresentmentKeysForCredential:(id)a0 numKeys:(long long)a1 completion:(id /* block */)a2;
- (void)isAccountKeySigningKeyAvailableForAccountKeyIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)isPIITokenAvailableForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)keyInfoForCredential:(id)a0 completion:(id /* block */)a1;
- (void)occupiedLegacySEKeySlotsWithCompletion:(id /* block */)a0;
- (void)payloadAuthACLForCredential:(id)a0 completion:(id /* block */)a1;
- (void)payloadsOfCredential:(id)a0 completion:(id /* block */)a1;
- (void)propertiesOfCredential:(id)a0 completion:(id /* block */)a1;
- (void)replacePayloadOfCredential:(id)a0 withPayload:(id)a1 format:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)retrievePIIHashFromSyncableKeyStoreForIdentifier:(id)a0 keystoreType:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)retrievePIITokenFromSyncableKeyStoreForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)setStateOfCredential:(id)a0 to:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)storePIIHashInSyncableKeyStoreForIdentifier:(id)a0 data:(id)a1 keystoreType:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)storePIITokenInSyncableKeyStoreForIdentifier:(id)a0 data:(id)a1 credentialIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)updatePIITokenInSyncableKeyStoreForIdentifier:(id)a0 attributesToUpdate:(id)a1 credentialIdentifier:(id)a2 completion:(id /* block */)a3;

@end
