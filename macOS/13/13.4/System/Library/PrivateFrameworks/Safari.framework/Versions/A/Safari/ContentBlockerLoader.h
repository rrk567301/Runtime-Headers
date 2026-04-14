@interface ContentBlockerLoader : NSObject <ContentBlockerLoaderProtocol>

- (void)loadDeclarativeNetRequestContentBlockingRulesForExtensionWithIdentifier:(id)a0 previouslyLoadedHash:(id)a1 sandboxExtensionToken:(id)a2 rules:(id)a3 reply:(id /* block */)a4;
- (void)loadContentBlockerWithIdentifier:(id)a0 previouslyLoadedHash:(id)a1 sandboxExtensionToken:(id)a2 reply:(id /* block */)a3;
- (void)removeContentBlockerWithIdentifier:(id)a0 reply:(id /* block */)a1;

@end
