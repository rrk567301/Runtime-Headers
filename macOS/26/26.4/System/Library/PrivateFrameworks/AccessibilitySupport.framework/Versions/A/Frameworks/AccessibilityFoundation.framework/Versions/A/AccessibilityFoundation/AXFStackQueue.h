@class _AXFStackNode;

@interface AXFStackQueue : NSObject {
    _AXFStackNode *_firstNode;
    _AXFStackNode *_lastNode;
    unsigned long long _count;
}

@property (readonly, nonatomic) BOOL isEmpty;

- (id)objectEnumerator;
- (void)enqueueObject:(id)a0;
- (void)removeAllObjects;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)description;
- (id)dequeueObject;
- (void)dealloc;
- (id)popObject;
- (void)pushObject:(id)a0;
- (id)dequeueObjectRetained;
- (id)popObjectRetained;
- (void)pushArray:(id)a0;
- (id)topObject;

@end
