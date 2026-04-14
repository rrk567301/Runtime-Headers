@class NSObject;
@protocol OS_dispatch_queue;

@interface SKDLocationResolution : SKDModel {
    struct _SIGeoIndex { } *_geoIndex;
    id _pirClient;
    NSObject<OS_dispatch_queue> *_pirQueue;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)loadWithCompletionHandler:(id /* block */)a0;
- (void)_callPIRWithQuery:(id)a0 locale:(id)a1 completionHandler:(id /* block */)a2;
- (void)_collectPIRResults:(id)a0 forQuery:(id)a1 locale:(id)a2 completionHandler:(id /* block */)a3;
- (id)_convertGeoListToLocations:(id)a0 includeExpansions:(BOOL)a1;
- (id)_lookupFromLocalCacheWithString:(id)a0 locale:(id)a1;
- (id)_retrieveLocationFromLocalCache:(id)a0 locale:(id)a1;
- (void)_retrieveLocationFromPIR:(id)a0 locale:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)_shouldFilterLocation:(id)a0 byParentLocations:(id)a1;
- (void)enumerateResultsWithInputs:(id)a0 options:(id)a1 usingBlock:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)initWithContext:(id)a0 logger:(id)a1;
- (unsigned int)typeOfTerritory:(id)a0;
- (void)unloadWithCompletionHandler:(id /* block */)a0;

@end
