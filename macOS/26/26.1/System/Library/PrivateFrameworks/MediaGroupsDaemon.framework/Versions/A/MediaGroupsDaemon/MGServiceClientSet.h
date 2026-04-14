@class NSMapTable;

@interface MGServiceClientSet : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (copy, nonatomic) NSMapTable *clients;

- (void)enumerateClientsUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (id)serviceClientForXPCConnection:(id)a0;
- (void)addClientService:(id)a0;
- (void)removeClientService:(id)a0;

@end
