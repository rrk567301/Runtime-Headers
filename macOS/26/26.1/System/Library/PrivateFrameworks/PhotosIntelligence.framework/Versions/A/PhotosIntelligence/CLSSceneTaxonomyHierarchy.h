@class PFSceneTaxonomy;

@interface CLSSceneTaxonomyHierarchy : NSObject {
    PFSceneTaxonomy *_sceneTaxonomy;
    BOOL _forSceneNetOnly;
}

- (id)rootNode;
- (id)nodeForName:(id)a0;
- (void).cxx_destruct;
- (id)initForSceneNetOnly:(BOOL)a0;
- (BOOL)nodeExistsForName:(id)a0;
- (id)nodeForIdentifier:(unsigned long long)a0;

@end
