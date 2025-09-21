@class AFLinkedListItem;
@protocol AFQueueDelegate;

@interface AFQueue : NSObject <NSFastEnumeration> {
    AFLinkedListItem *_head;
    AFLinkedListItem *_tail;
    unsigned long long _count;
}

@property (readonly, nonatomic) id frontObject;
@property (readonly, nonatomic) unsigned long long count;
@property (weak, nonatomic) id<AFQueueDelegate> delegate;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)dealloc;
- (void)enqueueObjects:(id)a0;
- (id)dequeueAllObjects;
- (id)dequeueObject;
- (id)description;
- (void)enqueueObject:(id)a0;
- (id)_objects;
- (void).cxx_destruct;
- (id)objectAtIndex:(unsigned long long)a0;

@end
