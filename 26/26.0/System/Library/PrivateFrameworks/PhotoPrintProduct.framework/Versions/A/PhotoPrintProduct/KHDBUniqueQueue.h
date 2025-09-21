@class NSLock, NSMutableSet, NSMutableArray;

@interface KHDBUniqueQueue : NSObject {
    NSLock *m_lock;
    NSMutableSet *m_inQueue;
    NSMutableArray *m_front;
    NSMutableArray *m_back;
}

- (void)removeObject:(id)a0;
- (void)dealloc;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)init;
- (void)removeAllObjects;
- (id)description;
- (BOOL)containsObject:(id)a0;
- (void)removeObjects:(id)a0;
- (void)addAtEnd:(id)a0;
- (void)addObjectsToEnd:(id)a0;
- (void)addObjectsToFront:(id)a0;
- (void)addToFront:(id)a0;
- (id)grabAllObjects;
- (id)popFrontObject;

@end
