@class PFSceneTaxonomy;

@interface CLSSceneTaxonomyHierarchy : NSObject {
    PFSceneTaxonomy *_sceneTaxonomy;
}

- (id)init;
- (void).cxx_destruct;
- (id)rootNode;
- (id)nodeForName:(id)a0;
- (BOOL)nodeExistsForName:(id)a0;
- (id)nodeForIdentifier:(unsigned int)a0;

@end
