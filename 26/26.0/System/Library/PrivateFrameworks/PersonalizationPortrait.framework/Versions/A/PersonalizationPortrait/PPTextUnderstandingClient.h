@class PPXPCClientHelper;

@interface PPTextUnderstandingClient : NSObject {
    PPXPCClientHelper *_clientHelper;
}

+ (id)sharedInstance;

- (id)init;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)spotlightAttributesForBundleId:(id)a0 spotlightIdentifier:(id)a1 extractions:(id)a2 error:(id *)a3;

@end
