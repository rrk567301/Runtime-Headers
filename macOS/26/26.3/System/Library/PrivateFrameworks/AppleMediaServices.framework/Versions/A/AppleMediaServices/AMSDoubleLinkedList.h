@class NSString, NSArray, AMSDoubleLinkedListNode;

@interface AMSDoubleLinkedList : NSObject

@property (retain) NSString *listIdentifier;
@property (readonly) NSArray *allNodes;
@property (readonly) unsigned long long count;
@property (retain) AMSDoubleLinkedListNode *head;
@property (retain) AMSDoubleLinkedListNode *tail;

- (id)appendObject:(id)a0;
- (id)description;
- (id)init;
- (void)insertNode:(id)a0;
- (void)removeNode:(id)a0;
- (void).cxx_destruct;
- (id)insertObject:(id)a0;
- (void)removeAllNodes;
- (void)appendNode:(id)a0;

@end
