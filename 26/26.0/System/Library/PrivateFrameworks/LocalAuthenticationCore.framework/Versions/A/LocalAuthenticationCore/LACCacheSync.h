@interface LACCacheSync : LACCache {
    id /* block */ _block;
}

- (id)initWithTimeout:(double)a0 block:(id /* block */)a1;
- (void).cxx_destruct;
- (id)valueWithParameter:(id)a0 error:(id *)a1;

@end
