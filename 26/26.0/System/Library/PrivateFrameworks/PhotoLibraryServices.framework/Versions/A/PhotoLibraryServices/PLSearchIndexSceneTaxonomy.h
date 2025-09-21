@class NSIndexSet;

@interface PLSearchIndexSceneTaxonomy : PFSceneTaxonomy {
    NSIndexSet *_dogSceneIDs;
}

- (void)enumerateKeywordAndSynonymsForScenes:(id)a0 usingBlock:(id /* block */)a1;
- (id)dogSceneIDs;
- (void)enumerateKeywordAndSynonymsForScenes:(id)a0 includeDogScenes:(BOOL)a1 usingBlock:(id /* block */)a2;
- (void).cxx_destruct;

@end
