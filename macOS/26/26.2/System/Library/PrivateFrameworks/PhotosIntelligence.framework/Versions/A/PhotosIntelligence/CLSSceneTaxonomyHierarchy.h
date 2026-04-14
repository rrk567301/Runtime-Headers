@class PFSceneTaxonomy;

@interface CLSSceneTaxonomyHierarchy : NSObject {
    PFSceneTaxonomy *_sceneTaxonomy;
    BOOL _forSceneNetOnly;
}

- (id)nodeForIdentifier:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)rootNode;
- (id)initForSceneNetOnly:(BOOL)a0;
- (id)nodeForName:(id)a0;
- (BOOL)nodeExistsForName:(id)a0;

@end
