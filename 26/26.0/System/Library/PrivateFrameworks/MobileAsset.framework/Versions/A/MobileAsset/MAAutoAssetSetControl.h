@class NSString, SUCoreConnectClient;

@interface MAAutoAssetSetControl : NSObject <SUCoreConnectClientDelegate>

@property (readonly, retain, nonatomic) NSString *controlClientDomainName;
@property (readonly, retain, nonatomic) NSString *controlClientName;
@property (readonly, retain, nonatomic) NSString *controlClientProcessName;
@property (readonly, nonatomic) long long controlClientProcessID;
@property (retain, nonatomic) SUCoreConnectClient *connectionClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)frameworkInstanceSetLogDomain;
+ (id)_privateStateQueue;
+ (id)frameworkInstanceUUID;
+ (id)defaultDispatchQueue;
+ (id)assetSetDescriptorInfo:(id)a0 error:(id *)a1;
+ (id)assetSetsOverview:(id *)a0;
+ (id)assetSetsOverview:(id)a0 limitedToSetIdentifiers:(id)a1 error:(id *)a2;
+ (id)autoAssetSetControl;

- (void)handleMessage:(id)a0 reply:(id /* block */)a1;
- (void)handleResponse:(id)a0 error:(id)a1;
- (void)connectToServerFrameworkCompletion:(id /* block */)a0;
- (id)init;
- (void)connectionClosed;
- (void).cxx_destruct;
- (void)_autoAssetInstanceInfo:(id)a0 isSynchronous:(BOOL)a1 completion:(id /* block */)a2;
- (void)_autoAssetsOverview:(id)a0 limitedToSetIdentifiers:(id)a1 isSynchronous:(BOOL)a2 completion:(id /* block */)a3;
- (void)_failedControl:(id)a0 withErrorCode:(long long)a1 withResponseError:(id)a2 description:(id)a3 isSynchronous:(BOOL)a4 completion:(id /* block */)a5;
- (void)_failedControlInstanceInfo:(id)a0 withErrorCode:(long long)a1 withResponseError:(id)a2 description:(id)a3 isSynchronous:(BOOL)a4 completion:(id /* block */)a5;
- (void)_failedControlLockSummary:(id)a0 withErrorCode:(long long)a1 withResponseError:(id)a2 description:(id)a3 isSynchronous:(BOOL)a4 completion:(id /* block */)a5;
- (void)_failedControlOverview:(id)a0 withErrorCode:(long long)a1 withResponseError:(id)a2 description:(id)a3 isSynchronous:(BOOL)a4 completion:(id /* block */)a5;
- (void)_failedControlSummary:(id)a0 withErrorCode:(long long)a1 withResponseError:(id)a2 description:(id)a3 isSynchronous:(BOOL)a4 completion:(id /* block */)a5;
- (void)_successControl:(id)a0 isSynchronous:(BOOL)a1 completion:(id /* block */)a2;
- (void)_successControlInstanceInfo:(id)a0 withInstanceInfo:(id)a1 isSynchronous:(BOOL)a2 completion:(id /* block */)a3;
- (void)_successControlLockSummary:(id)a0 withLockSummaryEntries:(id)a1 isSynchronous:(BOOL)a2 completion:(id /* block */)a3;
- (void)_successControlOverview:(id)a0 withOverviewEntries:(id)a1 isSynchronous:(BOOL)a2 completion:(id /* block */)a3;

@end
