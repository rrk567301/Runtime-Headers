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

- (void)disconnect;
- (void)sendMsg:(unsigned short)a0 args:(id)a1;
- (id)getWhbLocalIdForRemoteId:(id)a0;
- (void)setTargetQueue:(id)a0;
- (void)removeWhbRemoteId:(id)a0;
- (void)setWhbLocalId:(id)a0 forRemoteId:(id)a1;
- (id)sendSyncMsg:(unsigned short)a0 args:(id)a1;
- (void)_sendBarrier;
- (void)_handleConnectionEvent:(id)a0;
- (void)sendMsgWithReply:(unsigned short)a0 args:(id)a1 replyBlock:(id /* block */)a2;
- (id)initWithDelegate:(id)a0 queue:(id)a1 options:(id)a2 sessionType:(int)a3;
- (void)_checkIn;
- (void)connect;
- (void)_applicationDidEnterBackgroundNotification;
- (void)_checkOut;
- (id)_allocXpcMsg:(unsigned short)a0 args:(id)a1;
- (void).cxx_destruct;
- (void)didReceiveForwardedDelegateCallbackMessage:(id)a0;
- (void)_handleFinalized;
- (void)forwardWhbMsg:(unsigned short)a0 args:(id)a1 cnx:(id)a2;
- (void)_handleMsg:(id)a0;
- (void)didReceiveForwardedMessage:(id)a0;
- (void)_applicationWillEnterForegroundNotification;
- (void)_handleInvalid;
- (id)_nameForMessage:(unsigned short)a0;
- (void)_handleReset;
- (void)setWhbReplyHandler:(id /* block */)a0;
- (id)getEventQueue;

@end
