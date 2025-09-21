@interface HDCloudSyncBlockOperation : HDCloudSyncOperation {
    id /* block */ _block;
}

- (void)main;
- (void).cxx_destruct;
- (void)skip;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 block:(id /* block */)a2;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 synchronousBlock:(id /* block */)a2;

@end
