@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface TRIXPCCovariateFetcher : NSObject {
    NSXPCConnection *xpcConnection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } connectionLock;
    NSObject<OS_dispatch_queue> *inFlightConnectionQueue;
}

- (void)invalidateConnection;
- (long long)appleIntelligenceState;
- (void).cxx_destruct;
- (id)init;
- (id)storefront;
- (id)adsBucketIDWithNamespace:(id)a0;
- (long long)appleIntelligenceStateWithUseCaseIdentifiers:(id)a0;
- (id)geoservicesBucketID;
- (id)mapsDeviceCountryCode;
- (void)sendMessageToRemoteObject:(id /* block */)a0;
- (void)setupArchivingServiceXPCConnection;

@end
