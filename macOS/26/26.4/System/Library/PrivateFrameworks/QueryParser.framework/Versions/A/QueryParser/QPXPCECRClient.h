@class GDEntityResolutionTextClient;

@interface QPXPCECRClient : QPECRClient {
    GDEntityResolutionTextClient *_client;
}

+ (id)sharedClient;

- (void).cxx_destruct;
- (id)init;
- (BOOL)coolDownECRClientSyncWithError:(id *)a0;
- (id)resolveEntitiesWithToken:(id)a0 request:(id)a1 error:(id *)a2;
- (BOOL)warmUpECRClientSyncWithError:(id *)a0;

@end
