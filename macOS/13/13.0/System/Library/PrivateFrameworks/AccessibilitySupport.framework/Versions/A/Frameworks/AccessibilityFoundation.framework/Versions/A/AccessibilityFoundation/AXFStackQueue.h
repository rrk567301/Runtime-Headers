@class _AXFStackNode;

@interface AXFStackQueue : NSObject {
    _AXFStackNode *_firstNode;
    _AXFStackNode *_lastNode;
    unsigned long long _count;
}

@property (readonly, nonatomic) BOOL isEmpty;

- (void)dealloc;
- (id)description;
- (unsigned long long)count;
- (id)objectEnumerator;
- (void)removeAllObjects;
- (void).cxx_destruct;
- (void)pushObject:(id)a0;
- (id)popObject;
- (void)enqueueObject:(id)a0;
- (id)dequeueObject;
- (void)pushArray:(id)a0;
- (id)popObjectRetained;
- (id)topObject;
- (id)dequeueObjectRetained;

@end
