@class NSSet, NSDictionary;

@interface PGDejunkerDeduper_CLSCurationItem : PGDejunkerDeduper {
    NSDictionary *_personLocalIdentifiersByItemIdentifier;
    NSDictionary *_peopleScenesByItemIdentifier;
    NSDictionary *_averageFaceQualityByItemIdentifier;
}

@property (retain, nonatomic) NSSet *verifiedPersonLocalIdentifiers;

- (void).cxx_destruct;
- (id)dejunkedDedupedItemIdentifiersWithItems:(id)a0 options:(id)a1 debugInfo:(out id *)a2;
- (void)_buildCachesWithItems:(id)a0 options:(id)a1;
- (id)bestItemInItems:(id)a0 options:(id)a1;
- (id)bestItemsInItems:(id)a0 options:(id)a1;
- (id)debugPersonStringForItem:(id)a0;
- (id)dejunkedDedupedItemsInItems:(id)a0 options:(id)a1 debugInfo:(id)a2 progressBlock:(id /* block */)a3;
- (id)faceprintByPersonLocalIdentifierByItemIdentifierWithItems:(id)a0;
- (id)featureWithItem:(id)a0;
- (char)isJunkForItem:(id)a0;
- (char)item:(id)a0 isStrongRequiredWithOptions:(id)a1;
- (char)item:(id)a0 isWeaklyRequiredWithOptions:(id)a1;
- (id)itemsSortedByScoreWithItems:(id)a0 options:(id)a1;
- (id)requiredItemsInItems:(id)a0 options:(id)a1 containStronglyRequiredItems:(char *)a2;

@end
