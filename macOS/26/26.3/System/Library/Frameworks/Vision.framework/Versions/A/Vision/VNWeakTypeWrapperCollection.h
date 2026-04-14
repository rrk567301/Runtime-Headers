@class NSMutableArray, NSRecursiveLock;

@interface VNWeakTypeWrapperCollection : NSObject {
    NSMutableArray *_weakObjectWrappers;
    NSRecursiveLock *_weakObjectWrappersLock;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)_enumerateObjectsDroppingWeakZeroedObjects:(BOOL)a0 usingBlock:(id /* block */)a1;
- (void)addObject:(id)a0 droppingWeakZeroedObjects:(BOOL)a1;
- (id)allObjectsDroppingWeakZeroedObjects:(BOOL)a0;
- (id)findObjectMeetingSearchCriteria:(id /* block */)a0 droppingWeakZeroedObjects:(BOOL)a1;

@end
