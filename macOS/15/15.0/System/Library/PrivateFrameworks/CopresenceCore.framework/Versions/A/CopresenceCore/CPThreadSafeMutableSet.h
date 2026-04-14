@class NSMutableSet;

@interface CPThreadSafeMutableSet : NSObject {
    NSMutableSet *_mutableSet;
}

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } operationLock;

- (id)description;
- (id)init;
- (BOOL)containsObject:(id)a0;
- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (void)unionSet:(id)a0;

@end
