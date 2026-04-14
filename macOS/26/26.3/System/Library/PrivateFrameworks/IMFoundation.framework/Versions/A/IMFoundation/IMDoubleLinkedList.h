@class IMDoubleLinkedListNode;

@interface IMDoubleLinkedList : NSObject

@property (retain) IMDoubleLinkedListNode *first;
@property (retain) IMDoubleLinkedListNode *last;
@property (readonly) unsigned long long count;

- (void)appendObject:(id)a0;
- (id)init;
- (BOOL)containsObject:(id)a0;
- (id)allObjects;
- (void).cxx_destruct;
- (void)dealloc;
- (void)removeAllObjects;
- (void)appendLinkedListNode:(id)a0;
- (id)popObject;
- (void)pushLinkedListNode:(id)a0;
- (void)pushObject:(id)a0;
- (void)removeLinkedListNode:(id)a0;

@end
