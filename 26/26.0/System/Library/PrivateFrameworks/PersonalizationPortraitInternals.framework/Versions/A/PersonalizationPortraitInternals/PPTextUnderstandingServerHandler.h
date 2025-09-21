@interface PPTextUnderstandingServerHandler : NSObject <PPTextUnderstandingServerProtocol>

- (id)init;
- (void)spotlightAttributesForBundleId:(id)a0 spotlightIdentifier:(id)a1 extractions:(id)a2 completion:(id /* block */)a3;

@end
