@class NSDictionary, CLSSceneTaxonomyHierarchy, NSObject;
@protocol OS_os_log;

@interface PGPublicEventDisambiguator : NSObject {
    NSDictionary *_publicEventCriteriaByCategory;
    CLSSceneTaxonomyHierarchy *_sceneTaxonomy;
    NSObject<OS_os_log> *_loggingConnection;
}

- (void).cxx_destruct;
- (id)initWithSceneTaxonomy:(id)a0 loggingConnection:(id)a1;
- (id)_frequentLocationNodesForMomentNode:(id)a0 largeFrequentLocationNodes:(id)a1;
- (id)_categoriesForCriteriaMatchingForPublicEvent:(id)a0;
- (void)collectConsolidatedAddressesForMomentNodes:(id)a0 largeFrequentLocationNodes:(id)a1 consolidatedAddresses:(id *)a2 consolidatedAddressesByMomentIdentifier:(id *)a3 momentNodesForConsolidatedAddresses:(id *)a4 progressBlock:(id /* block */)a5;
- (id)disambiguateEvents:(id)a0 forTimeLocationTuple:(id)a1 momentNode:(id)a2 graph:(id)a3 meaningfulEventProcessorCache:(id)a4 serviceManager:(id)a5;
- (id)publicEventCriteriaByCategoryInGraph:(id)a0;

@end
