@class _AXFStackNode;

@interface AXFStackQueue : NSObject {
    _AXFStackNode *_firstNode;
    _AXFStackNode *_lastNode;
    unsigned long long _count;
}

@property (readonly, nonatomic) BOOL isEmpty;

- (void)dealloc;
- (unsigned long long)count;
- (id)dequeueObject;
- (id)objectEnumerator;
- (void)removeAllObjects;
- (id)description;
- (void)enqueueObject:(id)a0;
- (void).cxx_destruct;
- (id)popObject;
- (void)pushObject:(id)a0;
- (id)dequeueObjectRetained;
- (id)popObjectRetained;
- (void)pushArray:(id)a0;
- (id)topObject;

@end
