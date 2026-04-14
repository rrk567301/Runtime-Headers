@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface TRIXPCCovariateFetcher : NSObject {
    NSXPCConnection *xpcConnection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } connectionLock;
    NSObject<OS_dispatch_queue> *inFlightConnectionQueue;
}

- (void)invalidateConnection;
- (id)init;
- (long long)appleIntelligenceState;
- (void).cxx_destruct;
- (long long)appleIntelligenceStateWithUseCaseIdentifiers:(id)a0;
- (id)geoservicesBucketID;
- (id)mapsDeviceCountryCode;
- (void)sendMessageToRemoteObject:(id /* block */)a0;
- (void)setupArchivingServiceXPCConnection;

@end
