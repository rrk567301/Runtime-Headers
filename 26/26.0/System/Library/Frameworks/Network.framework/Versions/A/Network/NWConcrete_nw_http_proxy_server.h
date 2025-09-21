@class NSString, NSObject;
@protocol OS_nw_array, OS_nw_parameters, OS_nw_listener, OS_dispatch_queue;

@interface NWConcrete_nw_http_proxy_server : NSObject <OS_nw_http_proxy_server> {
    struct mutex { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } m_lock; } lock;
    NSObject<OS_nw_parameters> *parameters;
    NSObject<OS_nw_listener> *listener;
    NSObject<OS_dispatch_queue> *queue;
    NSObject<OS_dispatch_queue> *client_queue;
    id /* block */ state_changed_handler;
    id /* block */ outbound_connection_handler;
    NSObject<OS_nw_array> *connections;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
