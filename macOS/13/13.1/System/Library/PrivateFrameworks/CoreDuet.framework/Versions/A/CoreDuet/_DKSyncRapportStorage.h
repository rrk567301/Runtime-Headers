@class _DKSyncRapportCommonStorage;

@interface _DKSyncRapportStorage : NSObject <_DKSyncCommonClass> {
    _DKSyncRapportCommonStorage *_commonStorage;
}

- (id)name;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (id)client;
- (void)setDeviceID:(id)a0;
- (BOOL)isAvailable;
- (void)cancelOutstandingOperations;
- (void)fetchSourceDeviceIDFromPeer:(id)a0 highPriority:(BOOL)a1 completion:(id /* block */)a2;
- (long long)transportType;
- (id)myDeviceID;
- (BOOL)isTransportActiveForPeer:(id)a0;
- (void)handleAvailabilityFailureWithPeer:(id)a0 completion:(id /* block */)a1;
- (id)transformResponseError:(id)a0;
- (id)transformCaughtObject:(id)a0 existingError:(id)a1;
- (void)handshakeWithDuetSyncPeer:(id)a0 orError:(id)a1;
- (void)sendRequestID:(id)a0 request:(id)a1 peer:(id)a2 highPriority:(BOOL)a3 options:(id)a4 responseHandler:(id /* block */)a5;
- (void)registerRequestIDsWithClient:(id)a0;

@end
