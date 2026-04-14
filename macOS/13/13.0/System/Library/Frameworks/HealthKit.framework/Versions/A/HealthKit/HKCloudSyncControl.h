@class NSString, HKTaskServerProxyProvider;

@interface HKCloudSyncControl : NSObject <_HKXPCExportable> {
    HKTaskServerProxyProvider *_proxyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (void).cxx_destruct;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)initWithHealthStore:(id)a0;
- (void)forceCloudSyncWithOptions:(unsigned long long)a0 reason:(long long)a1 completion:(id /* block */)a2;
- (void)forceCloudSyncWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)forceCloudSyncDataUploadForProfileWithCompletion:(id /* block */)a0;
- (void)fetchCloudSyncRequiredWithCompletion:(id /* block */)a0;
- (void)disableCloudSyncAndDeleteAllCloudDataWithCompletion:(id /* block */)a0;
- (void)fetchCloudSyncStatusWithCompletion:(id /* block */)a0;
- (void)fetchCloudSyncProgress:(id /* block */)a0 completion:(id /* block */)a1;
- (void)forceCloudSyncWithOptions:(unsigned long long)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
- (void)forceCloudResetWithProgress:(id /* block */)a0 completion:(id /* block */)a1;
- (void)fetchCloudDescriptionWithProgress:(id /* block */)a0 completion:(id /* block */)a1;
- (void)disableCloudSyncAndDeleteAllCloudDataWithProgress:(id /* block */)a0 completion:(id /* block */)a1;
- (void)disableCloudSyncWithCompletion:(id /* block */)a0;
- (void)enableCloudSyncWithCompletion:(id /* block */)a0;
- (void)accountConfigurationDidChangeWithCompletion:(id /* block */)a0;
- (void)oldestSampleStartDateInHealthDatabaseWithCompletion:(id /* block */)a0;
- (void)requestDataRefreshWithCompletion:(id /* block */)a0;

@end
