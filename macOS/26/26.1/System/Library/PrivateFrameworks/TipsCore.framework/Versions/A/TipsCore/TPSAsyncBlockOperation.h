@interface TPSAsyncBlockOperation : TPSAsyncOperation {
    void /* function */ asyncBlock;
}

@property (nonatomic, copy) id /* block */ asyncBlock;

- (void)main;
- (void).cxx_destruct;
- (id)init;
- (id)initWithAsyncBlock:(id /* block */)a0;

@end
