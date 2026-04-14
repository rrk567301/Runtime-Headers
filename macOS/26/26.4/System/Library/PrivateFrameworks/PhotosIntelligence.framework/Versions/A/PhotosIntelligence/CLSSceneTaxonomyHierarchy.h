@class PFSceneTaxonomy;

@interface CLSSceneTaxonomyHierarchy : NSObject {
    PFSceneTaxonomy *_sceneTaxonomy;
    BOOL _forSceneNetOnly;
}

- (id)initForSceneNetOnly:(BOOL)a0;
- (id)rootNode;
- (void).cxx_destruct;
- (id)nodeForIdentifier:(unsigned long long)a0;
- (id)nodeForName:(id)a0;
- (BOOL)nodeExistsForName:(id)a0;

@end
