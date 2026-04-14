@interface AVBlockOperation : AVOperation {
    id /* block */ _block;
}

- (void)start;
- (void)cancel;
- (id)initWithBlock:(id /* block */)a0;
- (void)dealloc;
- (id)init;

@end
