@class _DKSyncRapportCommonStorage;

@interface _DKSyncRapportStorage : NSObject <_DKSyncCommonClass> {
    _DKSyncRapportCommonStorage *_commonStorage;
}

- (void)start;
- (void)sendRequestID:(id)a0 request:(id)a1 peer:(id)a2 highPriority:(BOOL)a3 options:(id)a4 responseHandler:(id /* block */)a5;
- (void)handshakeWithDuetSyncPeer:(id)a0 orError:(id)a1;
- (void)fetchSourceDeviceIDFromPeer:(id)a0 highPriority:(BOOL)a1 completion:(id /* block */)a2;
- (void)handleAvailabilityFailureWithPeer:(id)a0 completion:(id /* block */)a1;
- (void)setDeviceID:(id)a0;
- (void)cancelOutstandingOperations;
- (id)init;
- (id)transformCaughtObject:(id)a0 existingError:(id)a1;
- (id)transformResponseError:(id)a0;
- (long long)transportType;
- (id)name;
- (BOOL)isTransportActiveForPeer:(id)a0;
- (id)client;
- (BOOL)isAvailable;
- (id)myDeviceID;
- (void)registerRequestIDsWithClient:(id)a0;
- (void).cxx_destruct;

@end
