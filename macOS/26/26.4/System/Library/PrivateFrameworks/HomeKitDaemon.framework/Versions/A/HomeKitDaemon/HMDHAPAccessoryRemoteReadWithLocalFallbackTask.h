@interface HMDHAPAccessoryRemoteReadWithLocalFallbackTask : HMDHAPAccessoryRemoteOperationWithLocalFallbackTask

- (unsigned long long)taskType;
- (id)_makeLocalTaskWithRequests:(id)a0 completion:(id /* block */)a1;
- (id)_makeRemoteTaskWithRequests:(id)a0 delegateDevice:(id)a1 completion:(id /* block */)a2;

@end
