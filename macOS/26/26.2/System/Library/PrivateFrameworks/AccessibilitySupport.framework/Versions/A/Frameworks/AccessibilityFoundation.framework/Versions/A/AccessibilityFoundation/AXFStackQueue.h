@class _AXFStackNode;

@interface AXFStackQueue : NSObject {
    _AXFStackNode *_firstNode;
    _AXFStackNode *_lastNode;
    unsigned long long _count;
}

@property (readonly, nonatomic) BOOL isEmpty;

- (void)enqueueObject:(id)a0;
- (unsigned long long)count;
- (id)objectEnumerator;
- (void).cxx_destruct;
- (id)dequeueObject;
- (id)description;
- (void)dealloc;
- (void)removeAllObjects;
- (id)popObject;
- (void)pushObject:(id)a0;
- (id)dequeueObjectRetained;
- (id)popObjectRetained;
- (void)pushArray:(id)a0;
- (id)topObject;

@end
