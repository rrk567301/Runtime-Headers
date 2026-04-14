@protocol HMDHAPAccessoryTask;

@interface HMDHAPAccessoryRemoteOperationWithLocalFallbackTask : HMDHAPAccessoryTask

@property (retain) id<HMDHAPAccessoryTask> remoteTask;
@property (retain) id<HMDHAPAccessoryTask> localTask;

- (void).cxx_destruct;
- (void)execute;
- (BOOL)_shouldFallbackLocallyWithError:(id)a0 accessory:(id)a1;
- (id /* block */)_remoteTaskCompletionHandler;
- (id)_makeRemoteTaskWithRequests:(id)a0 completion:(id /* block */)a1;
- (id)_makeLocalTaskWithRequests:(id)a0 completion:(id /* block */)a1;

@end
