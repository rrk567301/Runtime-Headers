@class NSMutableArray;

@interface CLSNSOperationsManager : NSObject {
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _lock;
    NSMutableArray *_operations;
}

- (unsigned long long)count;
- (void)addOperation:(id)a0;
- (void)unlock;
- (void).cxx_destruct;
- (void)lock;
- (void)removeOperation:(id)a0;
- (id)init;
- (void)performOperation:(id)a0 onOperationQueue:(id)a1 withTimeOut:(double)a2;

@end
