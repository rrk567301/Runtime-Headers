@interface _PASLazyImmortalResult : _PASLazyResult {
    _Atomic BOOL _done;
}

- (id)_initWithBlock:(id /* block */)a0;
- (id)resultIfAvailable;
- (id)initWithResult:(id)a0;
- (id)result;

@end
