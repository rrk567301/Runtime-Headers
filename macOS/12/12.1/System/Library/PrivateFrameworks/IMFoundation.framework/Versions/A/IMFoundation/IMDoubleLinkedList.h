@class IMDoubleLinkedListNode;

@interface IMDoubleLinkedList : NSObject

@property (retain) IMDoubleLinkedListNode *first;
@property (retain) IMDoubleLinkedListNode *last;
@property (readonly) unsigned long long count;

- (void)dealloc;
- (id)init;
- (void)removeAllObjects;
- (id)allObjects;
- (BOOL)containsObject:(id)a0;
- (void).cxx_destruct;
- (void)appendObject:(id)a0;
- (void)appendLinkedListNode:(id)a0;
- (void)pushLinkedListNode:(id)a0;
- (void)removeLinkedListNode:(id)a0;
- (void)pushObject:(id)a0;
- (id)popObject;

@end
