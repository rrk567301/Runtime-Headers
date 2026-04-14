@class NSMutableDictionary, NSMutableArray;

@interface IFDependencyChecker : NSObject {
    NSMutableDictionary *_nodes;
    NSMutableArray *_dependencyRegistry;
    NSMutableArray *_looseDependencyRegistry;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (id)objectForIdentifier:(id)a0;
- (id)_arrayToString:(id)a0;
- (void)_addParents:(id)a0 toChild:(id)a1;
- (void)_addChild:(id)a0 toParents:(id)a1;
- (id)missingDependenciesForIdentifier:(id)a0;
- (id)dependantChildrenForIdentifer:(id)a0;
- (void)addItemToRegistry:(id)a0 loose:(BOOL)a1;
- (void)removeItemFromRegistry:(id)a0;
- (void)clearRegistry;
- (id)addNode:(id)a0 withRequirements:(id)a1 andRepresentedObject:(id)a2;
- (id)objectNodeDictionary;
- (id)missingDependencyObjectsForIdentifier:(id)a0;
- (id)dependantChildrenObjectsForIdentifier:(id)a0;
- (BOOL)nodeHasAllDependencies:(id)a0;
- (BOOL)nodeHasDependantChildren:(id)a0;

@end
