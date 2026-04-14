@class NSXPCConnection;

@interface THClient : NSObject {
    BOOL _isConnected;
}

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (nonatomic) struct dispatch_queue_s { } *threadSafePropertyQueue;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithKeychainAccessGroup:(id)a0;
- (void)ctcsStoreThreadNetworkCredentialActiveDataSetInternally:(id)a0 network:(id)a1 credentialsDataSet:(id)a2 waitForSync:(BOOL)a3 completion:(id /* block */)a4;
- (void)ctcsDeleteActiveDataSetRecordWithUniqueIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)ctcsRetrieveActiveDataSetRecordWithUniqueIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)ctcsRetrievePreferredNetworkInternallyWithCompletion:(id /* block */)a0;
- (void)ctcsDeletePreferredNetworkWithCompletion:(id /* block */)a0;
- (void)ctcsCleanPreferredAndFrozenThreadNetworksWithCompletion:(id /* block */)a0;
- (void)storeCredentialsForBorderAgentInternally:(id)a0 networkName:(id)a1 extendedPANId:(id)a2 activeOperationalDataSet:(id)a3 completion:(id /* block */)a4;
- (void)retrieveActiveDataSetRecordInternallyForExtendedPANID:(id)a0 completion:(id /* block */)a1;
- (void)deleteCredentialsForBorderAgent:(id)a0 completion:(id /* block */)a1;
- (void)storeCredentialsForBorderAgent:(id)a0 activeOperationalDataSet:(id)a1 completion:(id /* block */)a2;
- (void)retrieveAllCredentials:(id /* block */)a0;
- (void)retrieveCredentialsForBorderAgent:(id)a0 completion:(id /* block */)a1;
- (void)retrievePreferredCredentials:(id /* block */)a0;
- (void)retrieveCredentialsForExtendedPANID:(id)a0 completion:(id /* block */)a1;
- (void)retrievePreferredNetworkInternallyOnMdnsAndSig:(id /* block */)a0;
- (void)retrievePreferredCredentialsInternally:(id /* block */)a0;
- (void)retrieveCredentialsForUUID:(id)a0 completion:(id /* block */)a1;
- (void)checkPreferredNetworkForActiveOperationalDataset:(id)a0 completion:(id /* block */)a1;
- (void)ctcsAddPreferredNetworkWithCompletion:(id)a0 extendedPANId:(id)a1 borderAgentID:(id)a2 completion:(id /* block */)a3;

@end
