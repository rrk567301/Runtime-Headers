@class NSMapTable;

@interface BSXPCServiceConnectionEventObservers : NSObject {
    NSMapTable *_lock_revocations;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (id)init;
- (void).cxx_destruct;

@end
