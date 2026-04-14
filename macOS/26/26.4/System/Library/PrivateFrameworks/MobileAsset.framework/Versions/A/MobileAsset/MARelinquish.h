@interface MARelinquish : NSObject

+ (void)resumeWithCompletion:(id /* block */)a0;
+ (void)_statusIsSynchronous:(BOOL)a0 clientDomainName:(id)a1 assetSetIdentifier:(id)a2 completion:(id /* block */)a3;
+ (BOOL)estimateEvictableBytesSyncWithReturnEvictableBytesPtr:(unsigned long long *)a0 returnEstimateEvictableBytesErrorPtr:(id *)a1;
+ (void)estimateEvictableBytesWithCompletion:(id /* block */)a0;
+ (BOOL)resumeSyncWithReturnResumeErrorPtr:(id *)a0;
+ (long long)statusSyncWithClientDomainName:(id)a0 assetSetIdentifier:(id)a1 returnStatusErrorPtr:(id *)a2;
+ (long long)statusSyncWithReturnStatusErrorPtr:(id *)a0;
+ (void)statusWithClientDomainName:(id)a0 assetSetIdentifier:(id)a1 completion:(id /* block */)a2;
+ (void)statusWithCompletion:(id /* block */)a0;
+ (BOOL)suspendSyncWithNeededBytes:(unsigned long long)a0 returnSuspendErrorPtr:(id *)a1;
+ (void)suspendWithNeededBytes:(unsigned long long)a0 completion:(id /* block */)a1;

@end
