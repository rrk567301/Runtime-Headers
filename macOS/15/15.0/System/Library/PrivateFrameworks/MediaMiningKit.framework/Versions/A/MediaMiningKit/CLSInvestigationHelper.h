@class CLSNatureCache, CLSServiceManager, CLSPOICache, CLSAOICache, NSMutableDictionary, CLSLocationCache, CLSROICache, CSUKnowledgeEntityStore;

@interface CLSInvestigationHelper : NSObject {
    NSMutableDictionary *_parentTaxonomyNodesBySceneIdentifierBySceneModelIdentifier;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _parentTaxonomyNodesLock;
    NSMutableDictionary *_taxonomyNodeBySceneIdentifierBySceneModelIdentifier;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _taxonomyNodesLock;
    NSMutableDictionary *_taxonomyNodesLevelsAndWeightsBySceneIdentifierBySceneModelIdentifier;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _taxonomyNodesLevelsAndWeightsLock;
    NSMutableDictionary *_maxTaxonomyNodeLevelBySceneIdentifierBySceneModelIdentifier;
    CSUKnowledgeEntityStore *_csuKnowledgeEntityStore;
}

@property (readonly) CLSServiceManager *serviceManager;
@property (readonly) CLSLocationCache *locationCache;
@property (readonly) CLSAOICache *aoiCache;
@property (readonly) CLSPOICache *poiCache;
@property (readonly) CLSROICache *roiCache;
@property (readonly) CLSNatureCache *natureCache;

+ (id)_csuKnowledgeEntityStore;

- (void).cxx_destruct;
- (unsigned long long)_maxLevelWithTaxonomyNode:(id)a0;
- (void)enumerateTaxonomyNodesLevelsAndWeightsStartingWithNode:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithServiceManager:(id)a0 locationCache:(id)a1 aoiCache:(id)a2 poiCache:(id)a3 roiCache:(id)a4 natureCache:(id)a5;
- (id)parentNodesOfTaxonomyNode:(id)a0;
- (id)taxonomyNodeForSceneIdentifier:(unsigned long long)a0 sceneModel:(id)a1;
- (id)visualLookupSceneNameForSceneIdentifier:(unsigned long long)a0;

@end
