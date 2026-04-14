@class PPXPCClientHelper;

@interface PPTextUnderstandingClient : NSObject {
    PPXPCClientHelper *_clientHelper;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)init;
- (id)spotlightAttributesForBundleId:(id)a0 spotlightIdentifier:(id)a1 extractions:(id)a2 error:(id *)a3;

@end
