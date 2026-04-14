@class NSMutableSet;

@interface TMXPCConnectionInvalidator : NSObject

@property struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } invalidationBlocksLock;
@property (readonly) NSMutableSet *connectionInvalidationBlocks;

- (void)invalidate;
- (void).cxx_destruct;
- (id)init;
- (void)addInvalidationBlock:(id /* block */)a0;
- (void)removeInvalidationBlock:(id /* block */)a0;

@end
