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
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (void)pushObject:(id)a0;
- (id)popObject;
- (void)enqueueObject:(id)a0;
- (id)dequeueObject;
- (void)pushArray:(id)a0;
- (id)popObjectRetained;
- (id)topObject;
- (id)dequeueObjectRetained;
- (void)_safeReleaseAllObjects;

@end
