@class NSMutableSet;

@interface MTRDelegateManager : NSObject {
    NSMutableSet *_delegates;
    id _owner;
}

- (void).cxx_destruct;
- (void)removeDelegate:(id)a0;
- (id)initWithOwner:(id)a0;
- (BOOL)_callDelegatesWithBlock:(id /* block */)a0 logString:(const char *)a1;
- (void)addDelegateInfo:(id)a0;
- (BOOL)callDelegatesWithBlock:(id /* block */)a0;
- (BOOL)callDelegatesWithBlock:(id /* block */)a0 logString:(const char *)a1;
- (unsigned long long)iterateDelegatesWithBlock:(id /* block */)a0;
- (void)removeAllDelegates;

@end
