@class _SCRCStackNode;

@interface SCRCStackQueue : NSObject {
    _SCRCStackNode *_firstNode;
    _SCRCStackNode *_lastNode;
    unsigned long long _count;
}

- (id)objectEnumerator;
- (BOOL)isEmpty;
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
- (void)_safeReleaseAllObjects;

@end
