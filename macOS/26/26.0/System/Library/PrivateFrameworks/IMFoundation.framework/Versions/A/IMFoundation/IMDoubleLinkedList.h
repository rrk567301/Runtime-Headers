@class IMDoubleLinkedListNode;

@interface IMDoubleLinkedList : NSObject

@property (retain) IMDoubleLinkedListNode *first;
@property (retain) IMDoubleLinkedListNode *last;
@property (readonly) unsigned long long count;

- (void)dealloc;
- (id)init;
- (id)allObjects;
- (void)removeAllObjects;
- (BOOL)containsObject:(id)a0;
- (void)appendObject:(id)a0;
- (void).cxx_destruct;
- (void)appendLinkedListNode:(id)a0;
- (id)popObject;
- (void)pushLinkedListNode:(id)a0;
- (void)pushObject:(id)a0;
- (void)removeLinkedListNode:(id)a0;

@end
