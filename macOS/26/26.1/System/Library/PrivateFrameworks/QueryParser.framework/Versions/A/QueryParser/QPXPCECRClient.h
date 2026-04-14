@class GDEntityResolutionTextClient;

@interface QPXPCECRClient : QPECRClient {
    GDEntityResolutionTextClient *_client;
}

+ (id)sharedClient;

- (void).cxx_destruct;
- (id)init;
- (BOOL)coolDownECRClientSyncWithError:(id *)a0;
- (id)resolveEntitiesWithRequest:(id)a0 error:(id *)a1;
- (BOOL)warmUpECRClientSyncWithError:(id *)a0;

@end
