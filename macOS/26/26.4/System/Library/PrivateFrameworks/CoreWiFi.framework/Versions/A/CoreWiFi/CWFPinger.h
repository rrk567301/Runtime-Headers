@class NSMutableArray, NSObject;
@protocol OS_nw_connection, OS_dispatch_queue;

@interface CWFPinger : NSObject

@property (retain) NSObject<OS_nw_connection> *connection;
@property int rawSocket;
@property (retain) NSObject<OS_dispatch_queue> *networkQueue;
@property unsigned short sequenceNumber;
@property unsigned short identifier;
@property (copy) id /* block */ completion;
@property BOOL stopped;
@property unsigned long long maxPings;
@property unsigned long long currentPingCount;
@property (retain) NSMutableArray *latencyValues;
@property (readonly, nonatomic) double percentLoss;

- (void)stop;
- (unsigned short)checksumForData:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)completePingWithError:(id)a0;
- (void)receiveReply;
- (void)sendPing;
- (void)startPingingToHost:(id)a0 withNumberOfPings:(unsigned long long)a1 completion:(id /* block */)a2;

@end
