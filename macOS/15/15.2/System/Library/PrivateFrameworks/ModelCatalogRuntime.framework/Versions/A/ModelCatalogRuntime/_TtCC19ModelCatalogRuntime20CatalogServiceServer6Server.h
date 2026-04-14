@interface _TtCC19ModelCatalogRuntime20CatalogServiceServer6Server : NSObject <MCCatalogServicesProtocol> {
    void /* unknown type, empty encoding */ clientApplicationIdentifier;
    void /* unknown type, empty encoding */ shouldBypassAvailabilitySecureCheck;
    void /* unknown type, empty encoding */ sideloadURL;
    void /* unknown type, empty encoding */ catalogIndex;
    void /* unknown type, empty encoding */ subscriptionManager;
}

- (id)init;
- (void).cxx_destruct;
- (void)hasEnoughStorageForGenerativeExperiencesEssentialResourcesWith:(id /* block */)a0;
- (void)generativeExperiencesEssentialResourcesReadyWith:(id /* block */)a0;
- (void)isGenerativeExperiencesEssentialResourcesReadyWith:(id /* block */)a0;
- (void)releaseResourceWithIdentifier:(id)a0 with:(id /* block */)a1;
- (void)releaseResourcesWithRequestKey:(id)a0 with:(id /* block */)a1;
- (void)removeSideloadWithResource:(id)a0 with:(id /* block */)a1;
- (void)removeSideloadWithResourceBundle:(id)a0 with:(id /* block */)a1;
- (void)requestResourceWithIdentifier:(id)a0 with:(id /* block */)a1;
- (void)requestResourcesWithRequestKey:(id)a0 with:(id /* block */)a1;
- (void)resourceAvailabilityBy:(id)a0 reply:(id /* block */)a1;
- (void)resourceBundleContainerWithIdentifier:(id)a0 with:(id /* block */)a1;
- (void)resourceBundleContainersWith:(id /* block */)a0;
- (void)resourceContainerWithIdentifier:(id)a0 with:(id /* block */)a1;
- (void)resourceContainersWith:(id /* block */)a0;
- (void)resourceInformationWithIdentifier:(id)a0 with:(id /* block */)a1;
- (void)resourceStatusWithIdentifier:(id)a0 with:(id /* block */)a1;
- (void)sideloadWithResource:(id)a0 with:(id /* block */)a1;
- (void)sideloadWithResourceBundle:(id)a0 with:(id /* block */)a1;
- (void)siriResourceAvailabilityWith:(id /* block */)a0;

@end
