@class NSMutableArray;

@interface PKAsyncUnaryOperationComposer : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_operations;
}

- (id)init;
- (void)addOperation:(id /* block */)a0;
- (void).cxx_destruct;
- (id)evaluatorWithInput:(id)a0;
- (id)evaluateWithInput:(id)a0 completion:(id /* block */)a1;

@end
