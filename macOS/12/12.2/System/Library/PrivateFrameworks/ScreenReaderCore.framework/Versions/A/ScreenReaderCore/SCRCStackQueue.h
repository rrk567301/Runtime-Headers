@class _SCRCStackNode;

@interface SCRCStackQueue : NSObject {
    _SCRCStackNode *_firstNode;
    _SCRCStackNode *_lastNode;
    unsigned long long _count;
}

- (void)dealloc;
- (id)description;
- (unsigned long long)count;
- (id)objectEnumerator;
- (void)removeAllObjects;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (void)pushObject:(id)a0;
- (id)popObject;
- (void)enqueueObject:(id)a0;
- (id)dequeueObject;
- (id)popObjectRetained;
- (id)dequeueObjectRetained;
- (void)pushArray:(id)a0;
- (id)topObject;
- (void)_safeReleaseAllObjects;

@end
