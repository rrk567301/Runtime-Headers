@class _DKSyncRapportCommonStorage;

@interface _DKSyncRapportStorage : NSObject <_DKSyncCommonClass> {
    _DKSyncRapportCommonStorage *_commonStorage;
}

- (void)fetchSourceDeviceIDFromPeer:(id)a0 highPriority:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)isAvailable;
- (long long)transportType;
- (void)start;
- (void)handleAvailabilityFailureWithPeer:(id)a0 completion:(id /* block */)a1;
- (id)myDeviceID;
- (id)transformCaughtObject:(id)a0 existingError:(id)a1;
- (id)client;
- (id)init;
- (void)sendRequestID:(id)a0 request:(id)a1 peer:(id)a2 highPriority:(BOOL)a3 options:(id)a4 responseHandler:(id /* block */)a5;
- (id)name;
- (id)transformResponseError:(id)a0;
- (void)setDeviceID:(id)a0;
- (void).cxx_destruct;
- (void)handshakeWithDuetSyncPeer:(id)a0 orError:(id)a1;
- (void)cancelOutstandingOperations;
- (void)registerRequestIDsWithClient:(id)a0;
- (BOOL)isTransportActiveForPeer:(id)a0;

@end
