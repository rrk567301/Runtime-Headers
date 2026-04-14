@interface HMFCancellationHandler : HMFObject <HMFCancellable> {
    id /* block */ _block;
}

- (id)initWithBlock:(id /* block */)a0;
- (void)cancel;
- (void).cxx_destruct;

@end
