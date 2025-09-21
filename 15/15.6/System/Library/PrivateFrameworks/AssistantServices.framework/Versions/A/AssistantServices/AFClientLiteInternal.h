@class NSObject;
@protocol OS_dispatch_queue;

@interface AFClientLiteInternal : NSObject <AFClientLiteClientCommandHandling> {
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _commandHandler;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)_handleCommand:(id)a0 afterCurrentRequest:(char)a1 isOneWay:(char)a2 completion:(id /* block */)a3;
- (oneway void)handleCommand:(id)a0 completion:(id /* block */)a1;
- (id)initAndHandleCommand:(id)a0 afterCurrentRequest:(char)a1 isOneWay:(char)a2 commandHandler:(id /* block */)a3 completion:(id /* block */)a4;

@end
