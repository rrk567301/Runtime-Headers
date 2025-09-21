@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_nw_connection;

@interface NWConcrete_nw_http_proxy_connection_pair : NSObject <OS_nw_http_proxy_connection_pair> {
    struct mutex { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } m_lock; } lock;
    NSObject<OS_dispatch_queue> *queue;
    NSObject<OS_dispatch_queue> *client_queue;
    NSObject<OS_nw_connection> *inbound_connection;
    NSObject<OS_nw_connection> *outbound_connection;
    id /* block */ state_changed_handler;
    id /* block */ outbound_connection_handler;
    BOOL setup;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
