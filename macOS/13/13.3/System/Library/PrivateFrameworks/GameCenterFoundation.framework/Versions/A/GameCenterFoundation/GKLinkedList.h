@class GKListNode;

@interface GKLinkedList : NSObject

@property (retain, nonatomic) GKListNode *headNode;
@property (retain, nonatomic) GKListNode *tailNode;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)removeNode:(id)a0;
- (void)removeAllNodes;
- (void)insertNode:(id)a0 before:(id)a1;
- (BOOL)hasCycle;
- (void)insertNodeAtBeginning:(id)a0;
- (id)insertNodeAtBeginningWithValue:(id)a0 forKey:(id)a1;
- (BOOL)isConsistent;
- (id)nodeForInsertionWithValue:(id)a0;

@end
