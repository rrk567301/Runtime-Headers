@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, CBXpcConnectionDelegate, OS_xpc_object;

@interface CBXpcConnection : NSObject {
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSMutableDictionary *_options;
    int _sessionType;
    NSObject<OS_dispatch_queue> *_xpcQueue;
    NSObject<OS_xpc_object> *_xpcConnection;
    BOOL _uiAppIsBackgrounded;
    BOOL _xpcConnectionConnected;
    id /* block */ _whbReplyHandler;
    NSMutableDictionary *_whbRemoteToLocalUuidMap;
}

@property (weak, nonatomic) id<CBXpcConnectionDelegate> delegate;

- (void)setTargetQueue:(id)a0;
- (void)disconnect;
- (id)sendSyncMsg:(unsigned short)a0 args:(id)a1;
- (void)connect;
- (id)getWhbLocalIdForRemoteId:(id)a0;
- (void)removeWhbRemoteId:(id)a0;
- (void)sendMsg:(unsigned short)a0 args:(id)a1;
- (void)_sendBarrier;
- (void)setWhbLocalId:(id)a0 forRemoteId:(id)a1;
- (void)_handleFinalized;
- (void)_checkOut;
- (void)_handleInvalid;
- (void).cxx_destruct;
- (id)_allocXpcMsg:(unsigned short)a0 args:(id)a1;
- (void)_handleMsg:(id)a0;
- (void)_applicationDidEnterBackgroundNotification;
- (void)sendMsgWithReply:(unsigned short)a0 args:(id)a1 replyBlock:(id /* block */)a2;
- (void)_handleReset;
- (void)_applicationWillEnterForegroundNotification;
- (id)initWithDelegate:(id)a0 queue:(id)a1 options:(id)a2 sessionType:(int)a3;
- (void)forwardWhbMsg:(unsigned short)a0 args:(id)a1 cnx:(id)a2;
- (id)getEventQueue;
- (void)_handleConnectionEvent:(id)a0;
- (void)setWhbReplyHandler:(id /* block */)a0;
- (void)_checkIn;
- (id)_nameForMessage:(unsigned short)a0;
- (void)didReceiveForwardedMessage:(id)a0;
- (void)didReceiveForwardedDelegateCallbackMessage:(id)a0;

@end
