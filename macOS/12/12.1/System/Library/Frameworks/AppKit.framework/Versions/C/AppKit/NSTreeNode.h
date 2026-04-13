@class NSArray, NSIndexPath, NSMutableArray;

@interface NSTreeNode : NSObject {
    id _childNodesProxy;
    void *_observationInfo;
    struct __NSTreeNodeFlags { unsigned char ignoreObserving : 1; unsigned int reserved : 31; } _NSTreeNodeFlags;
    id _representedObject;
    NSMutableArray *_childNodes;
    NSTreeNode *_parentNode;
}

@property (readonly) id representedObject;
@property (readonly) NSIndexPath *indexPath;
@property (readonly, getter=isLeaf) BOOL leaf;
@property (readonly, copy) NSArray *childNodes;
@property (readonly) NSMutableArray *mutableChildNodes;
@property (readonly, weak) NSTreeNode *parentNode;

+ (id)treeNodeWithRepresentedObject:(id)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (unsigned long long)count;
- (void)setObservationInfo:(void *)a0;
- (void).cxx_destruct;
- (void)setRepresentedObject:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void *)observationInfo;
- (void)setParentNode:(id)a0;
- (id)objectAtIndexPath:(id)a0;
- (id)descendantNodeAtIndexPath:(id)a0;
- (id)_indexPath;
- (void)sortWithSortDescriptors:(id)a0 recursively:(BOOL)a1;
- (id)_descendantNodeWithRepresentedObjectLineage:(id)a0;
- (id)_privateChildNodes;
- (id)initWithRepresentedObject:(id)a0;
- (void)_detachFromParent;
- (BOOL)_ignoreObserving;
- (void)_disableObserving;
- (void)_enableObserving;
- (unsigned long long)countOfSubNodes;
- (void)_insertObject:(id)a0 inSubNodesAtIndex:(unsigned long long)a1;
- (id)objectInSubNodesAtIndex:(unsigned long long)a0;
- (void)_removeObjectFromSubNodesAtIndex:(unsigned long long)a0;
- (void)_removeSubNodesAtIndexes:(id)a0;
- (void)willAccessChildNodes;
- (void)insertObject:(id)a0 inSubNodesAtIndex:(unsigned long long)a1;
- (void)removeObjectFromSubNodesAtIndex:(unsigned long long)a0;
- (id)subNodesAtIndexes:(id)a0;
- (void)getSubNodes:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)removeSubNodesAtIndexes:(id)a0;
- (BOOL)hasAncestor:(id)a0;
- (id)observedObject;
- (id)subnodeAtIndex:(unsigned long long)a0;
- (unsigned long long)childCountForKeyPath:(id)a0;
- (void)startObservingModelKeyPath:(id)a0;

@end
