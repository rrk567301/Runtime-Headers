@class NSMapTable, NSMutableDictionary, PathTree;

@interface IFInstallPlan : NSObject <NSCoding, NSCopying> {
    PathTree *_installTree;
    NSMutableDictionary *_attributes;
    NSMutableDictionary *_idToNode;
    NSMutableDictionary *_nodeActions;
    NSMapTable *_regexActions;
}

+ (id)planWithContentsOfFile:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)enumerator;
- (char)writeToFile:(id)a0 atomically:(char)a1;
- (id)valueForAttribute:(id)a0;
- (void)removeNode:(id)a0;
- (id)nodeForPath:(const char *)a0;
- (void)removePath:(const char *)a0;
- (id)initWithRootPath:(const char *)a0;
- (char)setValue:(id)a0 forAttribute:(id)a1;
- (id)allAttributes;
- (char)hasPatch;
- (id)nodeForIdentifier:(id)a0;
- (char)pathExists:(const char *)a0;
- (void)removeValueForAttribute:(id)a0;
- (char)isPatchForNode:(id)a0;
- (char)shouldSkipNode:(id)a0;
- (id)nodeIdentifiers;
- (char)shouldSkipPath:(id)a0;
- (void)addAction:(id)a0 toNode:(id)a1;
- (id)addPath:(const char *)a0 withType:(int)a1;
- (id)alternatePathForLastParentNode:(id)a0 onPath:(const char *)a1;
- (id)alternatePathForNode:(id)a0;
- (id)alternatePathForPath:(id)a0;
- (id)nodeForPath:(const char *)a0 returningLastNode:(id *)a1;
- (id)nodesForActionType:(id)a0;
- (unsigned int)numberOfNodes;
- (void)printPlan:(char)a0;
- (void)removeAction:(id)a0 fromNode:(id)a1;
- (void)setAlternatePath:(id)a0 forNode:(id)a1;
- (void)setAlternatePath:(id)a0 forPath:(id)a1;
- (void)setIdentifier:(id)a0 forNode:(id)a1;
- (void)setIsPatchForNode:(id)a0;
- (void)setShouldSkipNode:(id)a0;
- (void)setShouldSkipPath:(id)a0;
- (id)unresolvedActionsForNode:(id)a0;

@end
