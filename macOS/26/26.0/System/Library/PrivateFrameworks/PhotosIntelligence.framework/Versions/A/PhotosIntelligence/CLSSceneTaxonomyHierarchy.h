@class PFSceneTaxonomy;

@interface CLSSceneTaxonomyHierarchy : NSObject {
    PFSceneTaxonomy *_sceneTaxonomy;
    BOOL _forSceneNetOnly;
}

- (id)rootNode;
- (BOOL)nodeExistsForName:(id)a0;
- (id)nodeForName:(id)a0;
- (id)nodeForIdentifier:(unsigned long long)a0;
- (id)initForSceneNetOnly:(BOOL)a0;
- (void).cxx_destruct;

@end
