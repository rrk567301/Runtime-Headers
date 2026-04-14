@class NSObject;
@protocol OS_dispatch_queue;

@interface CMKappaInternal : NSObject {
    void *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    BOOL fStartedUpdates;
    id /* block */ fHandler;
}

- (void)dealloc;
- (id)init;
- (void)_teardown;
- (void)_startKappaUpdatesForItem:(long long)a0 withHandler:(id /* block */)a1;
- (void)_stopKappaUpdates;

@end
