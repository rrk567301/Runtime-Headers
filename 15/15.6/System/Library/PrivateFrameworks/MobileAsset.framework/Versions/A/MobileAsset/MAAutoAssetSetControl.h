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

+ (id)_privateStateQueue;
+ (id)activeSetJobSummary:(char)a0 error:(id *)a1;
+ (id)activeSetJobSummary:(char)a0 limitedToSetIdentifiers:(id)a1 error:(id *)a2;
+ (id)assetSetDescriptorInfo:(id)a0 error:(id *)a1;
+ (id)assetSetsOverview:(id *)a0;
+ (id)assetSetsOverview:(id)a0 limitedToSetIdentifiers:(id)a1 error:(id *)a2;
+ (id)autoAssetSetControl;
+ (id)defaultDispatchQueue;
+ (void)frameworkInstanceSetLogDomain;
+ (id)frameworkInstanceUUID;
+ (id)knownAssetSetSummary:(char)a0 error:(id *)a1;
+ (id)knownAssetSetSummary:(char)a0 limitedToSetIdentifiers:(id)a1 error:(id *)a2;
+ (id)lockedAssetSetSummary:(char)a0 error:(id *)a1;
+ (id)lockedAssetSetSummary:(char)a0 limitedToSetIdentifiers:(id)a1 error:(id *)a2;
+ (id)scheduledSetJobSummary:(char)a0 error:(id *)a1;
+ (id)scheduledSetJobSummary:(char)a0 limitedToSetIdentifiers:(id)a1 error:(id *)a2;
+ (id)stagedAssetSetSummary:(char)a0 error:(id *)a1;
+ (id)stagedAssetSetSummary:(char)a0 limitedToSetIdentifiers:(id)a1 error:(id *)a2;

- (id)init;
- (void).cxx_destruct;
- (void)handleMessage:(id)a0 reply:(id /* block */)a1;
- (void)_activeSetJobSummary:(char)a0 limitedToSetIdentifiers:(id)a1 isSynchronous:(char)a2 completion:(id /* block */)a3;
- (void)_autoAssetInstanceInfo:(id)a0 isSynchronous:(char)a1 completion:(id /* block */)a2;
- (void)_autoAssetsOverview:(id)a0 limitedToSetIdentifiers:(id)a1 isSynchronous:(char)a2 completion:(id /* block */)a3;
- (void)_failedControl:(id)a0 withErrorCode:(long long)a1 withResponseError:(id)a2 description:(id)a3 isSynchronous:(char)a4 completion:(id /* block */)a5;
- (void)_failedControlInstanceInfo:(id)a0 withErrorCode:(long long)a1 withResponseError:(id)a2 description:(id)a3 isSynchronous:(char)a4 completion:(id /* block */)a5;
- (void)_failedControlLockSummary:(id)a0 withErrorCode:(long long)a1 withResponseError:(id)a2 description:(id)a3 isSynchronous:(char)a4 completion:(id /* block */)a5;
- (void)_failedControlOverview:(id)a0 withErrorCode:(long long)a1 withResponseError:(id)a2 description:(id)a3 isSynchronous:(char)a4 completion:(id /* block */)a5;
- (void)_failedControlSummary:(id)a0 withErrorCode:(long long)a1 withResponseError:(id)a2 description:(id)a3 isSynchronous:(char)a4 completion:(id /* block */)a5;
- (void)_knownAssetSummary:(char)a0 limitedToSetIdentifiers:(id)a1 isSynchronous:(char)a2 completion:(id /* block */)a3;
- (void)_lockedAssetSetSummary:(char)a0 limitedToSetIdentifiers:(id)a1 isSynchronous:(char)a2 completion:(id /* block */)a3;
- (void)_scheduledSetJobSummary:(char)a0 limitedToSetIdentifiers:(id)a1 isSynchronous:(char)a2 completion:(id /* block */)a3;
- (void)_stagedAssetSetSummary:(char)a0 limitedToSetIdentifiers:(id)a1 isSynchronous:(char)a2 completion:(id /* block */)a3;
- (void)_successControl:(id)a0 isSynchronous:(char)a1 completion:(id /* block */)a2;
- (void)_successControlInstanceInfo:(id)a0 withInstanceInfo:(id)a1 isSynchronous:(char)a2 completion:(id /* block */)a3;
- (void)_successControlLockSummary:(id)a0 withLockSummaryEntries:(id)a1 isSynchronous:(char)a2 completion:(id /* block */)a3;
- (void)_successControlOverview:(id)a0 withOverviewEntries:(id)a1 isSynchronous:(char)a2 completion:(id /* block */)a3;
- (void)_successControlSummary:(id)a0 withJobSummaryEntries:(id)a1 isSynchronous:(char)a2 completion:(id /* block */)a3;
- (void)connectToServerFrameworkCompletion:(id /* block */)a0;
- (void)connectionClosed;
- (void)handleResponse:(id)a0 error:(id)a1;

@end
