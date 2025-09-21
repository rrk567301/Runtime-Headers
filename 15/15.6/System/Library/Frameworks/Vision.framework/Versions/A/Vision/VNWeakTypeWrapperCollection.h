@class NSMutableArray, NSRecursiveLock;

@interface VNWeakTypeWrapperCollection : NSObject {
    NSMutableArray *_weakObjectWrappers;
    NSRecursiveLock *_weakObjectWrappersLock;
}

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)_enumerateObjectsDroppingWeakZeroedObjects:(char)a0 usingBlock:(id /* block */)a1;
- (void)addObject:(id)a0 droppingWeakZeroedObjects:(char)a1;
- (id)allObjectsDroppingWeakZeroedObjects:(char)a0;
- (id)findObjectMeetingSearchCriteria:(id /* block */)a0 droppingWeakZeroedObjects:(char)a1;

@end
