@class LAAuthenticationMethodConfiguration, NSHashTable;

@interface LAAuthenticationMethod : NSObject {
    NSHashTable *_observers;
    char _running;
}

@property (readonly, nonatomic) LAAuthenticationMethodConfiguration *configuration;

- (void)dealloc;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (char)start;
- (void)terminate;
- (id)initWithConfiguration:(id)a0;
- (void)forEachObserverWithInvoke:(id /* block */)a0;
- (void)forEachObserverWithProtocol:(id)a0 selector:(SEL)a1 invoke:(id /* block */)a2;

@end
