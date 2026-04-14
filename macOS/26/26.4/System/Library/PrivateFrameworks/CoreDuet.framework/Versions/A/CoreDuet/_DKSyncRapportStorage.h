@class _DKSyncRapportCommonStorage;

@interface _DKSyncRapportStorage : NSObject <_DKSyncCommonClass> {
    _DKSyncRapportCommonStorage *_commonStorage;
}

- (BOOL)isAvailable;
- (long long)transportType;
- (void)fetchSourceDeviceIDFromPeer:(id)a0 highPriority:(BOOL)a1 completion:(id /* block */)a2;
- (id)name;
- (void)setDeviceID:(id)a0;
- (void)sendRequestID:(id)a0 request:(id)a1 peer:(id)a2 highPriority:(BOOL)a3 options:(id)a4 responseHandler:(id /* block */)a5;
- (void)cancelOutstandingOperations;
- (id)myDeviceID;
- (id)transformCaughtObject:(id)a0 existingError:(id)a1;
- (id)client;
- (void)handshakeWithDuetSyncPeer:(id)a0 orError:(id)a1;
- (void)registerRequestIDsWithClient:(id)a0;
- (void).cxx_destruct;
- (void)handleAvailabilityFailureWithPeer:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)start;
- (BOOL)isTransportActiveForPeer:(id)a0;
- (id)transformResponseError:(id)a0;

@end
