@class BSDispatchSource;

@interface BSProcessDeathWatcher : NSObject {
    BSDispatchSource *_source;
    id /* block */ _deathHandler;
}

- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithPID:(int)a0 queue:(id)a1 deathHandler:(id /* block */)a2;
- (void)dealloc;

@end
