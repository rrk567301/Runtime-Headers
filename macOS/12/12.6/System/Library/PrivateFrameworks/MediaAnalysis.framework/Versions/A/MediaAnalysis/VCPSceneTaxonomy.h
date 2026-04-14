@class PVSceneTaxonomy;

@interface VCPSceneTaxonomy : NSObject {
    PVSceneTaxonomy *_sceneTaxonomy;
}

+ (id)sharedTaxonomy;

- (id)init;
- (void).cxx_destruct;
- (id)sceneNameFromSceneId:(unsigned int)a0;
- (id)sceneIdFromSceneName:(id)a0;

@end
