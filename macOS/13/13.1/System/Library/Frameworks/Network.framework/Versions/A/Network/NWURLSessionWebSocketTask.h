@class NSURLResponse, NSData, NSObject, NSMutableArray;
@protocol OS_nw_connection;

@interface NWURLSessionWebSocketTask : NWURLSessionTask {
    BOOL _receiving;
    unsigned short _pingSeed;
    long long _closeCode;
    NSData *_closeReason;
    NSURLResponse *_storedResponse;
    NSObject<OS_nw_connection> *_upgradedConnection;
    NSMutableArray *_pendingWork;
    NSMutableArray *_pendingReceiveCompletionHandlers;
}

@property (nonatomic) long long maximumMessageSize;
@property (readonly, nonatomic) long long closeCode;
@property (readonly, copy, nonatomic) NSData *closeReason;

- (BOOL)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)receiveMessageWithCompletionHandler:(id /* block */)a0;
- (id)response;
- (void)sendPingWithPongReceiveHandler:(id /* block */)a0;
- (void)_sendCloseCode:(long long)a0 reason:(id)a1;
- (void)cancelWithCloseCode:(long long)a0 reason:(id)a1;
- (void)startNextLoad;
- (void)completeTaskWithError:(id)a0;

@end
