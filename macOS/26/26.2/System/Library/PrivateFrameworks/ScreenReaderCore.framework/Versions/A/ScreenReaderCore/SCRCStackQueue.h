@class _SCRCStackNode;

@interface SCRCStackQueue : NSObject {
    _SCRCStackNode *_firstNode;
    _SCRCStackNode *_lastNode;
    unsigned long long _count;
}

- (void)enqueueObject:(id)a0;
- (unsigned long long)count;
- (id)objectEnumerator;
- (void).cxx_destruct;
- (id)dequeueObject;
- (id)description;
- (BOOL)isEmpty;
- (void)dealloc;
- (void)removeAllObjects;
- (id)popObject;
- (void)pushObject:(id)a0;
- (id)dequeueObjectRetained;
- (id)popObjectRetained;
- (void)pushArray:(id)a0;
- (id)topObject;
- (void)_safeReleaseAllObjects;

@end
