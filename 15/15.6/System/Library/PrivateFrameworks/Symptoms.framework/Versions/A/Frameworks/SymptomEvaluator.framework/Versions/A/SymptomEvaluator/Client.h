@class NSMutableSet, NSXPCConnection;

@interface Client : NSObject {
    long long _activeMessageCount;
    long long _barrierMessageCount;
    long long _droppedMessageCount;
    char _shouldSendMessages;
    char _forceUpdateOnWake;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSMutableSet *subscribedNOIs;

- (id)description;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_decrementMessageCounter:(long long)a0;
- (void)_incrementMessageCounter:(long long)a0;
- (void)_sendBarrierIfNecessaryWithBlock:(id /* block */)a0;
- (char)_shouldSendMessages;
- (id)initWithConn:(id)a0;

@end
