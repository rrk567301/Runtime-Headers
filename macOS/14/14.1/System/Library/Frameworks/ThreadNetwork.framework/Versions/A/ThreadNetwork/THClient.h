@class NSXPCConnection;

@interface THClient : NSObject {
    BOOL _isConnected;
}

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (nonatomic) struct dispatch_queue_s { } *threadSafePropertyQueue;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)ctcsRetrieveOrGeneratePreferredNetworkInternallyWithCompletion:(id /* block */)a0;
- (void)ctcsRetrieveActiveDataSetRecordWithUniqueIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)checkPreferredNetworkForActiveOperationalDataset:(id)a0 completion:(id /* block */)a1;
- (void)ctcsAddPreferredNetworkWithCompletionInternally:(id)a0 extendedPANId:(id)a1 borderAgentID:(id)a2 ipV4NwSignature:(id)a3 ipv6NwSignature:(id)a4 wifiSSID:(id)a5 wifiPassword:(id)a6 completion:(id /* block */)a7;
- (void)ctcsCleanKeychainThreadNetworksWithCompletion:(id /* block */)a0;
- (void)ctcsCleanPreferredAndFrozenThreadNetworksWithCompletion:(id /* block */)a0;
- (void)ctcsDeleteActiveDataSetRecordWithUniqueIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)ctcsDeletePreferredNetworkWithCompletion:(id /* block */)a0;
- (void)ctcsRetrievePreferredNetworkInternallyWithCompletion:(id /* block */)a0;
- (void)ctcsStoreThreadNetworkCredentialActiveDataSetInternally:(id)a0 network:(id)a1 credentialsDataSet:(id)a2 waitForSync:(BOOL)a3 completion:(id /* block */)a4;
- (void)deleteCredentialsForBorderAgent:(id)a0 completion:(id /* block */)a1;
- (id)initWithKeychainAccessGroup:(id)a0;
- (void)isPreferredNetworkAvailableWithCompletion:(id /* block */)a0;
- (void)retrieveActiveDataSetRecordInternallyForExtendedPANID:(id)a0 completion:(id /* block */)a1;
- (void)retrieveAllActiveCredentials:(id /* block */)a0;
- (void)retrieveAllCredentials:(id /* block */)a0;
- (void)retrieveCredentialsForBorderAgent:(id)a0 completion:(id /* block */)a1;
- (void)retrieveCredentialsForExtendedPANID:(id)a0 completion:(id /* block */)a1;
- (void)retrieveCredentialsForUUID:(id)a0 completion:(id /* block */)a1;
- (void)retrievePreferredCredentials:(id /* block */)a0;
- (void)retrievePreferredCredentialsInternally:(id /* block */)a0;
- (void)retrievePreferredNetworkInternallyOnMdnsAndSig:(id /* block */)a0;
- (void)storeCredentialsForBorderAgent:(id)a0 activeOperationalDataSet:(id)a1 completion:(id /* block */)a2;
- (void)storeCredentialsForBorderAgentInternally:(id)a0 networkName:(id)a1 extendedPANId:(id)a2 activeOperationalDataSet:(id)a3 completion:(id /* block */)a4;
- (void)updatePreferredCredentialsInternally:(id /* block */)a0;

@end
