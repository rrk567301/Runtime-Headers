@class GDEntityResolutionInProcessTextClient;

@interface QPInProcessECRClient : QPECRClient {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _clientLock;
    GDEntityResolutionInProcessTextClient *_client;
}

+ (id)sharedClient;

- (void).cxx_destruct;
- (id)init;
- (BOOL)coolDownECRClientSyncWithError:(id *)a0;
- (id)ecrClientWithError:(id *)a0;
- (id)resolveEntitiesWithToken:(id)a0 request:(id)a1 error:(id *)a2;
- (BOOL)warmUpECRClientSyncWithError:(id *)a0;

@end
