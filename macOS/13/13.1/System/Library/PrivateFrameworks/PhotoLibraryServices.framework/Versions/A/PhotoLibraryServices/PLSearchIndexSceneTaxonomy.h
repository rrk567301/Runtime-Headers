@interface PLSearchIndexSceneTaxonomy : PFSceneTaxonomy

+ (BOOL)_useHighRecallThresholds;

- (void)enumerateKeywordAndSynonymsForScenes:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumerateKeywordAndSynonymsForSceneIdentifiers:(id)a0 usingBlock:(id /* block */)a1;

@end
