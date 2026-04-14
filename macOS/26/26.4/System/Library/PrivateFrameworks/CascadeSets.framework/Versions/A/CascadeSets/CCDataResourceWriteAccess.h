@class NSObject;
@protocol BMAccessAssertion, CCSetChangeNotifierProtocol;

@interface CCDataResourceWriteAccess : NSObject {
    id<BMAccessAssertion> _assertionOverride;
    NSObject<CCSetChangeNotifierProtocol> *_changeNotifier;
}

+ (id)defaultInstance;

- (void).cxx_destruct;
- (id)databaseWriterForDonationRequest:(id)a0 outDataResource:(id *)a1 error:(id *)a2;
- (BOOL)performMaintenanceActivity:(id /* block */)a0 accessAssertion:(id)a1;
- (id)requestAccessToResource:(id)a0 withMode:(unsigned long long)a1 useCase:(id)a2 error:(id *)a3;
- (BOOL)_performMaintenanceForSet:(id)a0 withResource:(id)a1 accessAssertion:(id)a2 shouldDefer:(id /* block */)a3;
- (BOOL)_purgeTombstonedResources:(id)a0;
- (BOOL)_removeContainerOverriddenResource:(id)a0;
- (id)_resolveContainer:(id)a0;
- (id)initWithAssertionOverride:(id)a0 changeNotifier:(id)a1;

@end
