@interface AVBlockOperation : AVOperation {
    id /* block */ _block;
}

- (void)cancel;
- (id)initWithBlock:(id /* block */)a0;
- (void)start;
- (id)init;
- (void)dealloc;

@end
