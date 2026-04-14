@class NSString, NSArray, AMSDoubleLinkedListNode;

@interface AMSDoubleLinkedList : NSObject

@property (retain) NSString *listIdentifier;
@property (readonly) NSArray *allNodes;
@property (readonly) unsigned long long count;
@property (retain) AMSDoubleLinkedListNode *head;
@property (retain) AMSDoubleLinkedListNode *tail;

- (void)removeAllNodes;
- (void)appendNode:(id)a0;
- (id)insertObject:(id)a0;
- (void).cxx_destruct;
- (void)removeNode:(id)a0;
- (id)appendObject:(id)a0;
- (id)init;
- (id)description;
- (void)insertNode:(id)a0;

@end
