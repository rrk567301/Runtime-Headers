@class BSDispatchSource;

@interface BSProcessDeathWatcher : NSObject {
    BSDispatchSource *_source;
    id /* block */ _deathHandler;
}

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithPID:(int)a0 queue:(id)a1 deathHandler:(id /* block */)a2;

@end
