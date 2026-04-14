@class NSCountedSet, NSObject;
@protocol OS_dispatch_queue;

@interface OITSUXPCMainController : NSObject {
    NSCountedSet *mConnectionHandlers;
    NSObject<OS_dispatch_queue> *mConnectionHandlersQueue;
    id /* block */ mConnectionHandlerBlock;
}

+ (id)sharedController;

- (id)init;
- (void)dealloc;
- (void)p_addConnectionHandler:(id)a0;
- (void)p_handleNewConnection:(id)a0;
- (void)p_removeConnectionHandler:(id)a0;
- (void)runWithConnectionHandlersReturnedByBlock:(id /* block */)a0;

@end
