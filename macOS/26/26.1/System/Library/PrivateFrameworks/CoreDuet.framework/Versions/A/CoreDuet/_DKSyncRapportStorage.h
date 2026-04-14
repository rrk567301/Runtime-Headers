@class _DKSyncRapportCommonStorage;

@interface _DKSyncRapportStorage : NSObject <_DKSyncCommonClass> {
    _DKSyncRapportCommonStorage *_commonStorage;
}

- (void)cancelOutstandingOperations;
- (BOOL)isAvailable;
- (void)start;
- (void)fetchSourceDeviceIDFromPeer:(id)a0 highPriority:(BOOL)a1 completion:(id /* block */)a2;
- (void)setDeviceID:(id)a0;
- (void)handshakeWithDuetSyncPeer:(id)a0 orError:(id)a1;
- (BOOL)isTransportActiveForPeer:(id)a0;
- (void)sendRequestID:(id)a0 request:(id)a1 peer:(id)a2 highPriority:(BOOL)a3 options:(id)a4 responseHandler:(id /* block */)a5;
- (long long)transportType;
- (void)handleAvailabilityFailureWithPeer:(id)a0 completion:(id /* block */)a1;
- (id)transformCaughtObject:(id)a0 existingError:(id)a1;
- (id)client;
- (void).cxx_destruct;
- (id)transformResponseError:(id)a0;
- (id)name;
- (void)registerRequestIDsWithClient:(id)a0;
- (id)myDeviceID;
- (id)init;

@end
