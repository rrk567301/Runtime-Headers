@class LAAuthenticationMethodConfiguration, NSHashTable;

@interface LAAuthenticationMethod : NSObject {
    NSHashTable *_observers;
    BOOL _running;
}

@property (readonly, nonatomic) LAAuthenticationMethodConfiguration *configuration;

- (void)terminate;
- (BOOL)start;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)forEachObserverWithInvoke:(id /* block */)a0;
- (void)forEachObserverWithProtocol:(id)a0 selector:(SEL)a1 invoke:(id /* block */)a2;

@end
