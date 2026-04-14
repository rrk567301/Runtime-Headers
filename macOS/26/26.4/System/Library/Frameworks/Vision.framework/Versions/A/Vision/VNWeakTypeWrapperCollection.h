@class NSMutableArray, NSRecursiveLock;

@interface VNWeakTypeWrapperCollection : NSObject {
    NSMutableArray *_weakObjectWrappers;
    NSRecursiveLock *_weakObjectWrappersLock;
}

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void)_enumerateObjectsDroppingWeakZeroedObjects:(BOOL)a0 usingBlock:(id /* block */)a1;
- (void)addObject:(id)a0 droppingWeakZeroedObjects:(BOOL)a1;
- (id)allObjectsDroppingWeakZeroedObjects:(BOOL)a0;
- (id)findObjectMeetingSearchCriteria:(id /* block */)a0 droppingWeakZeroedObjects:(BOOL)a1;

@end
