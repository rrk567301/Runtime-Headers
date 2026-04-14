@class LAAuthenticationMethodConfiguration, NSHashTable;

@interface LAAuthenticationMethod : NSObject {
    NSHashTable *_observers;
    BOOL _running;
}

@property (readonly, nonatomic) LAAuthenticationMethodConfiguration *configuration;

- (void)terminate;
- (void)addObserver:(id)a0;
- (void).cxx_destruct;
- (BOOL)start;
- (id)initWithConfiguration:(id)a0;
- (void)dealloc;
- (void)forEachObserverWithInvoke:(id /* block */)a0;
- (void)forEachObserverWithProtocol:(id)a0 selector:(SEL)a1 invoke:(id /* block */)a2;

@end
