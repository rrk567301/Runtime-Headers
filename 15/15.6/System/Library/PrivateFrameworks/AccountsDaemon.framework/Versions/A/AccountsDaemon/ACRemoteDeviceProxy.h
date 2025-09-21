@class NSLock, NSString, ACRemoteCommandHandler, NSMutableDictionary, NSObject, IDSService;
@protocol OS_dispatch_queue;

@interface ACRemoteDeviceProxy : NSObject <IDSServiceDelegate> {
    IDSService *_messageSendingService;
    NSObject<OS_dispatch_queue> *_messageSendingQueue;
    NSObject<OS_dispatch_queue> *_commandProcessingQueue;
    ACRemoteCommandHandler *_remoteCommandHandler;
    NSMutableDictionary *_completionHandlersByInternalMessageID;
    NSMutableDictionary *_internalMessageIDsByTransportID;
    NSLock *_completionHandlersLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(char)a3 error:(id)a4;
- (void)service:(id)a0 account:(id)a1 incomingData:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)_enqueueCompletionHandler:(id /* block */)a0 forMessageWithInternalID:(id)a1 transportID:(id)a2;
- (void)_dequeueCompletionHandlersForMessageWithInternalID:(id)a0 success:(char)a1 result:(id)a2 error:(id)a3;
- (void)_dequeueCompletionHandlersForMessageWithTransportID:(id)a0 success:(char)a1 result:(id)a2 error:(id)a3;
- (char)_isValidCommandForOutgoingMessage:(id)a0;
- (long long)_priorityForMessageCarryingCommand:(id)a0;
- (char)_sendMessageData:(id)a0 toDestination:(id)a1 withPriority:(long long)a2 bypassDuet:(char)a3 transportID:(id *)a4 error:(id *)a5;
- (void)_sendReplyForMessage:(id)a0 toDestination:(id)a1 withSuccess:(char)a2 result:(id)a3 error:(id)a4;
- (void)sendCommand:(id)a0 withAccount:(id)a1 completion:(id /* block */)a2;
- (void)sendCommand:(id)a0 withAccount:(id)a1 options:(id)a2 completion:(id /* block */)a3;

@end
