@class NSObject, NEAppProxyProvider;
@protocol OS_dispatch_queue, NEAppProxyProviderContainerDelegate;

@interface NEAppProxyProviderContainer : NSObject {
    unsigned int _delegateInterfaceIndex;
    id<NEAppProxyProviderContainerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_flowQueue;
    struct _NEFlowDirector { } *_director;
    id /* block */ _stopCompletionHandler;
}

@property (readonly) NEAppProxyProvider *provider;

- (void)stop;
- (void)wake;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)startWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithDelegate:(id)a0 providerClass:(Class)a1;
- (void).cxx_destruct;
- (void)sleepWithCompletionHandler:(id /* block */)a0;
- (void)handleAppMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)setInitialFlowDivertControlSocket:(id)a0;
- (void)setConfiguration:(id)a0;
- (void)setDelegateInterface:(unsigned int)a0;

@end
