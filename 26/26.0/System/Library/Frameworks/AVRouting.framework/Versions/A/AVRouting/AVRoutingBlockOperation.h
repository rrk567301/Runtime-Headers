@interface AVRoutingBlockOperation : AVRoutingOperation {
    id /* block */ _block;
}

- (id)initWithBlock:(id /* block */)a0;
- (void)start;
- (void)dealloc;
- (void)cancel;
- (id)init;

@end
