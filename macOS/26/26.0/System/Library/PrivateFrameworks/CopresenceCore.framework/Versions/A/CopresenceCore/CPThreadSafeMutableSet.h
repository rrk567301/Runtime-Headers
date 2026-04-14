@class NSMutableSet;

@interface CPThreadSafeMutableSet : NSObject {
    NSMutableSet *_mutableSet;
}

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } operationLock;

- (void)unionSet:(id)a0;
- (id)init;
- (void)addObject:(id)a0;
- (id)description;
- (BOOL)containsObject:(id)a0;
- (void).cxx_destruct;

@end
