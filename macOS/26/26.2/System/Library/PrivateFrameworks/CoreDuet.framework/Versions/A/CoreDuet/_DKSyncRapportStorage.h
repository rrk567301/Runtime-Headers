@class _DKSyncRapportCommonStorage;

@interface _DKSyncRapportStorage : NSObject <_DKSyncCommonClass> {
    _DKSyncRapportCommonStorage *_commonStorage;
}

- (void)handshakeWithDuetSyncPeer:(id)a0 orError:(id)a1;
- (void)fetchSourceDeviceIDFromPeer:(id)a0 highPriority:(BOOL)a1 completion:(id /* block */)a2;
- (id)transformCaughtObject:(id)a0 existingError:(id)a1;
- (void)cancelOutstandingOperations;
- (BOOL)isAvailable;
- (void).cxx_destruct;
- (long long)transportType;
- (id)transformResponseError:(id)a0;
- (void)start;
- (void)setDeviceID:(id)a0;
- (id)myDeviceID;
- (id)name;
- (void)sendRequestID:(id)a0 request:(id)a1 peer:(id)a2 highPriority:(BOOL)a3 options:(id)a4 responseHandler:(id /* block */)a5;
- (id)client;
- (void)handleAvailabilityFailureWithPeer:(id)a0 completion:(id /* block */)a1;
- (void)registerRequestIDsWithClient:(id)a0;
- (BOOL)isTransportActiveForPeer:(id)a0;
- (id)init;

@end
