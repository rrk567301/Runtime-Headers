@interface SiriKitRuntime.GenericContextTransformer : NSObject <AFContextSnapshotTransforming>

- (void).cxx_destruct;
- (id)init;
- (void)getRedactedContextForContextSnapshot:(id)a0 metadata:(id)a1 privacyPolicy:(long long)a2 completion:(id /* block */)a3;

@end
