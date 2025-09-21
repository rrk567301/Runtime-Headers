@class PFSceneTaxonomy;

@interface CLSSceneTaxonomyHierarchy : NSObject {
    PFSceneTaxonomy *_sceneTaxonomy;
    char _forSceneNetOnly;
}

- (void).cxx_destruct;
- (id)rootNode;
- (id)nodeForName:(id)a0;
- (id)initForSceneNetOnly:(char)a0;
- (char)nodeExistsForName:(id)a0;
- (id)nodeForIdentifier:(unsigned long long)a0;

@end
