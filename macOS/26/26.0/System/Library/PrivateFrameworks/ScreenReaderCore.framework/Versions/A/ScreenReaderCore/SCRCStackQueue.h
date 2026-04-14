@class _SCRCStackNode;

@interface SCRCStackQueue : NSObject {
    _SCRCStackNode *_firstNode;
    _SCRCStackNode *_lastNode;
    unsigned long long _count;
}

- (void)dealloc;
- (BOOL)isEmpty;
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
- (void)_safeReleaseAllObjects;

@end
