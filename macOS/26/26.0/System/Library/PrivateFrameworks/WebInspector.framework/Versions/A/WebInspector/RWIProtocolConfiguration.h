@class RWIProtocolNetworkDomainEventDispatcher, RWIProtocolPageDomainEventDispatcher, RWIProtocolConsoleDomainEventDispatcher, RWIProtocolDOMDomainEventDispatcher, RWIProtocolCSSDomainEventDispatcher, RWIProtocolDOMStorageDomainEventDispatcher;
@protocol RWIProtocolDOMDomainHandler, RWIProtocolCSSDomainHandler, RWIProtocolDOMStorageDomainHandler, RWIProtocolNetworkDomainHandler, RWIProtocolPageDomainHandler;

@interface RWIProtocolConfiguration : NSObject {
    struct AugmentableInspectorController { void /* function */ **x0; } *_controller;
    struct RetainPtr<id<RWIProtocolCSSDomainHandler>> { id<RWIProtocolCSSDomainHandler> m_ptr; } _cssHandler;
    struct RetainPtr<RWIProtocolCSSDomainEventDispatcher> { RWIProtocolCSSDomainEventDispatcher *m_ptr; } _cssEventDispatcher;
    struct RetainPtr<RWIProtocolConsoleDomainEventDispatcher> { RWIProtocolConsoleDomainEventDispatcher *m_ptr; } _consoleEventDispatcher;
    struct RetainPtr<id<RWIProtocolDOMDomainHandler>> { id<RWIProtocolDOMDomainHandler> m_ptr; } _domHandler;
    struct RetainPtr<RWIProtocolDOMDomainEventDispatcher> { RWIProtocolDOMDomainEventDispatcher *m_ptr; } _domEventDispatcher;
    struct RetainPtr<id<RWIProtocolDOMStorageDomainHandler>> { id<RWIProtocolDOMStorageDomainHandler> m_ptr; } _domStorageHandler;
    struct RetainPtr<RWIProtocolDOMStorageDomainEventDispatcher> { RWIProtocolDOMStorageDomainEventDispatcher *m_ptr; } _domStorageEventDispatcher;
    struct RetainPtr<id<RWIProtocolNetworkDomainHandler>> { id<RWIProtocolNetworkDomainHandler> m_ptr; } _networkHandler;
    struct RetainPtr<RWIProtocolNetworkDomainEventDispatcher> { RWIProtocolNetworkDomainEventDispatcher *m_ptr; } _networkEventDispatcher;
    struct RetainPtr<id<RWIProtocolPageDomainHandler>> { id<RWIProtocolPageDomainHandler> m_ptr; } _pageHandler;
    struct RetainPtr<RWIProtocolPageDomainEventDispatcher> { RWIProtocolPageDomainEventDispatcher *m_ptr; } _pageEventDispatcher;
}

@property (retain, nonatomic, setter=setCSSHandler:) id<RWIProtocolCSSDomainHandler> cssHandler;
@property (readonly, nonatomic) RWIProtocolCSSDomainEventDispatcher *cssEventDispatcher;
@property (readonly, nonatomic) RWIProtocolConsoleDomainEventDispatcher *consoleEventDispatcher;
@property (retain, nonatomic, setter=setDOMHandler:) id<RWIProtocolDOMDomainHandler> domHandler;
@property (readonly, nonatomic) RWIProtocolDOMDomainEventDispatcher *domEventDispatcher;
@property (retain, nonatomic, setter=setDOMStorageHandler:) id<RWIProtocolDOMStorageDomainHandler> domStorageHandler;
@property (readonly, nonatomic) RWIProtocolDOMStorageDomainEventDispatcher *domStorageEventDispatcher;
@property (retain, nonatomic, setter=setNetworkHandler:) id<RWIProtocolNetworkDomainHandler> networkHandler;
@property (readonly, nonatomic) RWIProtocolNetworkDomainEventDispatcher *networkEventDispatcher;
@property (retain, nonatomic, setter=setPageHandler:) id<RWIProtocolPageDomainHandler> pageHandler;
@property (readonly, nonatomic) RWIProtocolPageDomainEventDispatcher *pageEventDispatcher;

- (id)initWithController:(struct AugmentableInspectorController { void /* function */ **x0; } *)a0;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
