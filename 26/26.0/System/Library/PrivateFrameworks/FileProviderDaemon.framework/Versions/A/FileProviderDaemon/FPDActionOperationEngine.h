@class NSObject, NSOperationQueue, FPDServer;
@protocol OS_dispatch_queue;

@interface FPDActionOperationEngine : NSObject {
    FPDServer *_server;
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_operationQueue;
}

- (void)dumpStateTo:(id)a0;
- (id)init;
- (void)scheduleActionOperationWithInfo:(id)a0 request:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithServer:(id)a0;
- (void).cxx_destruct;
- (id)inFlightOperations;

@end
