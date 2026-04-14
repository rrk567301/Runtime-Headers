@interface AMSPromiseSerialQueue : NSObject {
    void /* unknown type, empty encoding */ serialQueue;
    void /* unknown type, empty encoding */ actionContinuation;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)runBinaryPromiseBlock:(id /* block */)a0;
- (id)runPromiseBlock:(id /* block */)a0;

@end
