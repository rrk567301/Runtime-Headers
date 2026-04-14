@class NSMutableSet, _DKEventTypeResultStatsCounter, NSDictionary, NSString, RPCompanionLinkClient, NSMutableDictionary, NSObject;
@protocol OS_dispatch_source;

@interface _DKSyncRapportCommonStorage : NSObject <_DKSyncRemoteStorage, _DKSyncCommonClass> {
    BOOL _running;
    NSDictionary *_failIfAsleepOption;
    _DKEventTypeResultStatsCounter *_failIfAsleepStats;
    NSString *_deviceID;
    RPCompanionLinkClient *_client;
    NSMutableDictionary *_companionLinkClients;
    unsigned long long _outstandingRequestCount;
    NSObject<OS_dispatch_source> *_companionLinkClientsCleanupTimer;
    double _retryTimeout;
    NSMutableSet *_peerSourceDeviceIDsWithCompletedHandshakes;
}

@property (nonatomic) BOOL isAvailable;

+ (id)sharedInstance;

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
- (void).cxx_destruct;
- (void)handleAvailabilityFailureWithPeer:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)start;
- (BOOL)isTransportActiveForPeer:(id)a0;
- (void)dealloc;
- (id)transformResponseError:(id)a0;

@end
