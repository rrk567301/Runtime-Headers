@class NSMutableDictionary, NSXPCConnection;

@interface CLLocationAccessRecorder : NSObject <CLLALocationAcessStoreServerProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _handlersLock;
    unsigned long long _messageHandlerSerialNumber;
}

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSMutableDictionary *inflightMessageCache;

- (id)init;
- (void)setConnection:(id)a0;
- (void)connect;
- (void).cxx_destruct;
- (id)getConnection;
- (id)getSynchronousRemoteObjectProxy;
- (void)accessInflightMessageCache:(id /* block */)a0;
- (void)exportLocationAccessActivity:(id /* block */)a0;
- (void)getLocationAccessRecordStateWithReplyBlock:(id /* block */)a0;
- (long long)getLocationAccessRecordingIntervalState;
- (void)handleCacheMessage:(id)a0;
- (void)handleMessageResend;
- (void)setLocationAccessRecordAsActiveForDays:(long long)a0 completionHandler:(id /* block */)a1;

@end
