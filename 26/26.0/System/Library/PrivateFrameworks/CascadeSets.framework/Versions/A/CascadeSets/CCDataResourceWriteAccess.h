@protocol BMAccessAssertion;

@interface CCDataResourceWriteAccess : NSObject {
    id<BMAccessAssertion> _assertionOverride;
}

+ (id)defaultInstance;

- (void).cxx_destruct;
- (BOOL)performMaintenanceActivity:(id /* block */)a0 accessAssertion:(id)a1;
- (id)requestAccessToResource:(id)a0 withMode:(unsigned long long)a1 useCase:(id)a2 error:(id *)a3;
- (id)setWriterForSet:(id)a0 accessAssertion:(id)a1;
- (BOOL)_removeContainerOverriddenResource:(id)a0;
- (id)_resolveContainer:(id)a0;
- (id)initWithAssertionOverride:(id)a0;
- (BOOL)purgeTombstonedResources:(id)a0;

@end
