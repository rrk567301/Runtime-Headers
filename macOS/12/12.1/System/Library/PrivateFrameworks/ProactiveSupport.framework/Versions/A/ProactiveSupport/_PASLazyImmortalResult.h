@interface _PASLazyImmortalResult : _PASLazyResult {
    _Atomic BOOL _done;
}

- (id)result;
- (id)initWithResult:(id)a0;
- (id)resultIfAvailable;
- (id)_initWithBlock:(id /* block */)a0;

@end
