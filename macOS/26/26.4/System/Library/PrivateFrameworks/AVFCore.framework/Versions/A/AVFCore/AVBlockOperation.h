@interface AVBlockOperation : AVOperation {
    id /* block */ _block;
}

- (id)initWithBlock:(id /* block */)a0;
- (void)cancel;
- (id)init;
- (void)start;
- (void)dealloc;

@end
