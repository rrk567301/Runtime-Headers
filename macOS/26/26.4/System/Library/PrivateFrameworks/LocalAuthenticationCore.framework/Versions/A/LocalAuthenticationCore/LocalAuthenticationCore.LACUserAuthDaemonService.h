@class OS_dispatch_queue;

@interface LocalAuthenticationCore.LACUserAuthDaemonService : LACServiceManagerBase <LACUserAuthDaemonXPC> {
    void /* unknown type, empty encoding */ userService;
    void /* unknown type, empty encoding */ daemonQueue;
}

@property (nonatomic, readonly) OS_dispatch_queue *queue;

- (void).cxx_destruct;
- (id)init;
- (BOOL)allowsMultipleClientsForServiceType:(id)a0;
- (void)bootstrapServiceWithType:(id)a0 clientConnection:(id)a1 completionHandler:(id /* block */)a2;
- (void)bootstrapSessionServiceType:(id)a0 completionHandler:(id /* block */)a1;

@end
