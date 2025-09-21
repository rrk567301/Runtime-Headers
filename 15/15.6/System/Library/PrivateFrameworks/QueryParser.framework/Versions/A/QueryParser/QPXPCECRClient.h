@class GDEntityResolutionTextClient;

@interface QPXPCECRClient : QPECRClient {
    GDEntityResolutionTextClient *_client;
}

+ (id)sharedClient;

- (id)init;
- (void).cxx_destruct;
- (char)coolDownECRClientSyncWithError:(id *)a0;
- (id)resolveEntitiesWithRequest:(id)a0 error:(id *)a1;
- (char)warmUpECRClientSyncWithError:(id *)a0;

@end
