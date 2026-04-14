@class _SCRCStackNode;

@interface SCRCStackQueue : NSObject {
    _SCRCStackNode *_firstNode;
    _SCRCStackNode *_lastNode;
    unsigned long long _count;
}

- (void)removeAllObjects;
- (id)objectEnumerator;
- (void)enqueueObject:(id)a0;
- (id)description;
- (void)dealloc;
- (id)dequeueObject;
- (void).cxx_destruct;
- (unsigned long long)count;
- (BOOL)isEmpty;
- (id)popObject;
- (void)pushObject:(id)a0;
- (id)dequeueObjectRetained;
- (id)popObjectRetained;
- (void)pushArray:(id)a0;
- (id)topObject;
- (void)_safeReleaseAllObjects;

@end
