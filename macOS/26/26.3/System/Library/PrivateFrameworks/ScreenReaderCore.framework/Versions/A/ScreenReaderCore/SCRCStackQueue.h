@class _SCRCStackNode;

@interface SCRCStackQueue : NSObject {
    _SCRCStackNode *_firstNode;
    _SCRCStackNode *_lastNode;
    unsigned long long _count;
}

- (void)enqueueObject:(id)a0;
- (unsigned long long)count;
- (BOOL)isEmpty;
- (id)description;
- (void).cxx_destruct;
- (id)objectEnumerator;
- (void)dealloc;
- (void)removeAllObjects;
- (id)dequeueObject;
- (id)popObject;
- (void)pushObject:(id)a0;
- (id)dequeueObjectRetained;
- (id)popObjectRetained;
- (void)pushArray:(id)a0;
- (id)topObject;
- (void)_safeReleaseAllObjects;

@end
