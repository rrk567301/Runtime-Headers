@class MIBUNWConnection, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MIBUNWDevice : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    MIBUNWConnection *_connection;
    BOOL _connectOnDemand;
    NSMutableArray *_messages;
}

- (void)bootstrap;
- (void)invalidate;
- (id)init;
- (void).cxx_destruct;
- (void)_sendMessage:(id)a0;
- (void)_sendOutgoingMessage:(id)a0 synchronous:(BOOL)a1 shouldWait:(BOOL *)a2;
- (void)sendOutgoingMessage:(id)a0 synchronous:(BOOL)a1;

@end
