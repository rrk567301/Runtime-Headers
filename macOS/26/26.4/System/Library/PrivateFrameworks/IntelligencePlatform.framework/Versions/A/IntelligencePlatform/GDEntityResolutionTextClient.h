@class GDXPCEntityResolutionService;

@interface GDEntityResolutionTextClient : NSObject {
    GDXPCEntityResolutionService *xpcClient;
}

- (void).cxx_destruct;
- (id)init;
- (id)generateMentionsForQuery:(id)a0 error:(id *)a1;
- (id)resolveEntitiesForRequest:(id)a0 error:(id *)a1;
- (BOOL)warmupForMode:(long long)a0 error:(id *)a1;

@end
