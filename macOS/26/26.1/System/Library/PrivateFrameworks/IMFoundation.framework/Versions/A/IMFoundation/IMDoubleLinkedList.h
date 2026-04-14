@class IMDoubleLinkedListNode;

@interface IMDoubleLinkedList : NSObject

@property (retain) IMDoubleLinkedListNode *first;
@property (retain) IMDoubleLinkedListNode *last;
@property (readonly) unsigned long long count;

- (id)allObjects;
- (void)removeAllObjects;
- (void)appendObject:(id)a0;
- (BOOL)containsObject:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)appendLinkedListNode:(id)a0;
- (id)popObject;
- (void)pushLinkedListNode:(id)a0;
- (void)pushObject:(id)a0;
- (void)removeLinkedListNode:(id)a0;

@end
