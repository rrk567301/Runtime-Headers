@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface FudInternalConnection : NSObject <FudConnection> {
    NSString *clientIdentifier;
    NSObject<OS_dispatch_queue> *handlerQueue;
    id /* block */ messageHandler;
    NSMutableDictionary *pendingRequests;
    char didStop;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)stop;
- (long long)getNextMessageID;
- (void)handleInternalMessage:(id)a0;
- (id)initWithClientIdentifier:(id)a0 handlerQueue:(id)a1 messageHandler:(id /* block */)a2;
- (void)sendMessageToFud:(id)a0;
- (void)sendMessageToFud:(id)a0 reply:(id /* block */)a1;

@end
